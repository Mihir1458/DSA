#include <vector>
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int right = 1, left = 0, rm = 0, lm = 0, water = 0, leftm = 0, km = 0;
        int n = height.size();
        int h = n - 1;
        int pm = h;
        int e = h - 1;
        rm = height[n - 1];
        lm = *std::max_element(height.begin(), height.end());
        auto it = std::find(height.begin(), height.end(), lm);

        for (int i = 0; i < n; i++)
        {
            if (i <= it - height.begin())
            {
                if (right <= n - 1 && left <= n - 1)
                {
                    if (height[left] <= height[right])
                    {
                        if (height[right] < height[leftm])
                        {
                            water = height[leftm] - height[right] + water;
                        }
                        left++;
                    }
                    else
                    {
                        if (height[leftm] <= height[left])
                        {
                            leftm = left;
                        }
                        

                        water = height[leftm] - height[right] + water;
                        left++;
                    }
                    right++;
                }
                else
                {
                    break;
                }
            }

            else if (i > it - height.begin() && height[rm] <= height[it - height.begin()])
            {
                if (e > it - height.begin() && h > it - height.begin())
                {

                    if (height[e] >= height[h])
                    {
                        if (height[e] <= height[pm])
                        {
                            water = height[pm] - height[e] + water;
                        }
                        (e)--;
                    }
                    else
                    {
                        if (height[pm] < height[h])
                        {
                            pm = h;
                        }
                        

                        //water = water -(height[pm] - height[e]);
                        e--;
                    }
                    h--;
                }

                else
                {
                    break;
                }
            }
        }
        return water;
    }
};