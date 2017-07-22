#ifndef PRISMCOLORMAPS_H
#define PRISMCOLORMAPS_H
#include <vector>
#include <QColor>
#include <map>

namespace Prismatic{

    template<class T>
    struct Color{T r,g,b;};
    using Colormap = std::vector< Color<double> >;

    const Colormap nullColormap      = {{0.0, 0.0, 0.0}};

    const Colormap GrayColormap      = {{0.0, 0.0, 0.0},
                                        {1.0, 1.0, 1.0}};

    const Colormap RedColormap       = {{0.0, 0.0, 0.0},
                                        {1.0, 0.0, 0.0}};

    const Colormap BlueColormap      = {{0.0, 0.0, 0.0},
                                        {0.0, 0.0, 1.0}};

    const Colormap GreenColormap     = {{0.0, 0.0, 0.0},
                                        {0.0, 1.0, 0.0}};

    const Colormap JetColormap       = {{0,0,0.5625},
                                        {0,0,0.625},
                                        {0,0,0.6875},
                                        {0,0,0.75},
                                        {0,0,0.8125},
                                        {0,0,0.875},
                                        {0,0,0.9375},
                                        {0,0,1},
                                        {0,0.0625,1},
                                        {0,0.125,1},
                                        {0,0.1875,1},
                                        {0,0.25,1},
                                        {0,0.3125,1},
                                        {0,0.375,1},
                                        {0,0.4375,1},
                                        {0,0.5,1},
                                        {0,0.5625,1},
                                        {0,0.625,1},
                                        {0,0.6875,1},
                                        {0,0.75,1},
                                        {0,0.8125,1},
                                        {0,0.875,1},
                                        {0,0.9375,1},
                                        {0,1,1},
                                        {0.0625,1,0.9375},
                                        {0.125,1,0.875},
                                        {0.1875,1,0.8125},
                                        {0.25,1,0.75},
                                        {0.3125,1,0.6875},
                                        {0.375,1,0.625},
                                        {0.4375,1,0.5625},
                                        {0.5,1,0.5},
                                        {0.5625,1,0.4375},
                                        {0.625,1,0.375},
                                        {0.6875,1,0.3125},
                                        {0.75,1,0.25},
                                        {0.8125,1,0.1875},
                                        {0.875,1,0.125},
                                        {0.9375,1,0.0625},
                                        {1,1,0},
                                        {1,0.9375,0},
                                        {1,0.875,0},
                                        {1,0.8125,0},
                                        {1,0.75,0},
                                        {1,0.6875,0},
                                        {1,0.625,0},
                                        {1,0.5625,0},
                                        {1,0.5,0},
                                        {1,0.4375,0},
                                        {1,0.375,0},
                                        {1,0.3125,0},
                                        {1,0.25,0},
                                        {1,0.1875,0},
                                        {1,0.125,0},
                                        {1,0.0625,0},
                                        {1,0,0},
                                        {0.9375,0,0},
                                        {0.875,0,0},
                                        {0.8125,0,0},
                                        {0.75,0,0},
                                        {0.6875,0,0},
                                        {0.625,0,0},
                                        {0.5625,0,0},
                                        {0.5,0,0},
                                        };

    const Colormap VioletFireColormap = {
        {0.000000,0.000000,0.000000},
        {0.003175,0.000000,0.006349},
        {0.006349,0.000000,0.012698},
        {0.009524,0.000000,0.019048},
        {0.012698,0.000000,0.025397},
        {0.015873,0.000000,0.031746},
        {0.019048,0.000000,0.038095},
        {0.022222,0.000000,0.044444},
        {0.025397,0.000000,0.050794},
        {0.028571,0.000000,0.057143},
        {0.031746,0.000000,0.063492},
        {0.034921,0.000000,0.069841},
        {0.038095,0.000000,0.076190},
        {0.041270,0.000000,0.082540},
        {0.044444,0.000000,0.088889},
        {0.047619,0.000000,0.095238},
        {0.050794,0.000000,0.101587},
        {0.053968,0.000000,0.107937},
        {0.057143,0.000000,0.114286},
        {0.060317,0.000000,0.120635},
        {0.063492,0.000000,0.126984},
        {0.066667,0.000000,0.133333},
        {0.069841,0.000000,0.139683},
        {0.073016,0.000000,0.146032},
        {0.076190,0.000000,0.152381},
        {0.079365,0.000000,0.158730},
        {0.082540,0.000000,0.165079},
        {0.085714,0.000000,0.171429},
        {0.088889,0.000000,0.177778},
        {0.092063,0.000000,0.184127},
        {0.095238,0.000000,0.190476},
        {0.098413,0.000000,0.196825},
        {0.101587,0.000000,0.203175},
        {0.104762,0.000000,0.209524},
        {0.107937,0.000000,0.215873},
        {0.111111,0.000000,0.222222},
        {0.114286,0.000000,0.228571},
        {0.117460,0.000000,0.234921},
        {0.120635,0.000000,0.241270},
        {0.123810,0.000000,0.247619},
        {0.126984,0.000000,0.253968},
        {0.130159,0.000000,0.260317},
        {0.133333,0.000000,0.266667},
        {0.136508,0.000000,0.273016},
        {0.139683,0.000000,0.279365},
        {0.142857,0.000000,0.285714},
        {0.146032,0.000000,0.292063},
        {0.149206,0.000000,0.298413},
        {0.152381,0.000000,0.304762},
        {0.155556,0.000000,0.311111},
        {0.158730,0.000000,0.317460},
        {0.161905,0.000000,0.323810},
        {0.165079,0.000000,0.330159},
        {0.168254,0.000000,0.336508},
        {0.171429,0.000000,0.342857},
        {0.174603,0.000000,0.349206},
        {0.177778,0.000000,0.355556},
        {0.180952,0.000000,0.361905},
        {0.184127,0.000000,0.368254},
        {0.187302,0.000000,0.374603},
        {0.190476,0.000000,0.380952},
        {0.193651,0.000000,0.387302},
        {0.196825,0.000000,0.393651},
        {0.200000,0.000000,0.400000},
        {0.200000,0.000000,0.400000},
        {0.212698,0.000000,0.393651},
        {0.225397,0.000000,0.387302},
        {0.238095,0.000000,0.380952},
        {0.250794,0.000000,0.374603},
        {0.263492,0.000000,0.368254},
        {0.276190,0.000000,0.361905},
        {0.288889,0.000000,0.355556},
        {0.301587,0.000000,0.349206},
        {0.314286,0.000000,0.342857},
        {0.326984,0.000000,0.336508},
        {0.339683,0.000000,0.330159},
        {0.352381,0.000000,0.323810},
        {0.365079,0.000000,0.317460},
        {0.377778,0.000000,0.311111},
        {0.390476,0.000000,0.304762},
        {0.403175,0.000000,0.298413},
        {0.415873,0.000000,0.292063},
        {0.428571,0.000000,0.285714},
        {0.441270,0.000000,0.279365},
        {0.453968,0.000000,0.273016},
        {0.466667,0.000000,0.266667},
        {0.479365,0.000000,0.260317},
        {0.492063,0.000000,0.253968},
        {0.504762,0.000000,0.247619},
        {0.517460,0.000000,0.241270},
        {0.530159,0.000000,0.234921},
        {0.542857,0.000000,0.228571},
        {0.555556,0.000000,0.222222},
        {0.568254,0.000000,0.215873},
        {0.580952,0.000000,0.209524},
        {0.593651,0.000000,0.203175},
        {0.606349,0.000000,0.196825},
        {0.619048,0.000000,0.190476},
        {0.631746,0.000000,0.184127},
        {0.644444,0.000000,0.177778},
        {0.657143,0.000000,0.171429},
        {0.669841,0.000000,0.165079},
        {0.682540,0.000000,0.158730},
        {0.695238,0.000000,0.152381},
        {0.707937,0.000000,0.146032},
        {0.720635,0.000000,0.139683},
        {0.733333,0.000000,0.133333},
        {0.746032,0.000000,0.126984},
        {0.758730,0.000000,0.120635},
        {0.771429,0.000000,0.114286},
        {0.784127,0.000000,0.107937},
        {0.796825,0.000000,0.101587},
        {0.809524,0.000000,0.095238},
        {0.822222,0.000000,0.088889},
        {0.834921,0.000000,0.082540},
        {0.847619,0.000000,0.076190},
        {0.860317,0.000000,0.069841},
        {0.873016,0.000000,0.063492},
        {0.885714,0.000000,0.057143},
        {0.898413,0.000000,0.050794},
        {0.911111,0.000000,0.044444},
        {0.923810,0.000000,0.038095},
        {0.936508,0.000000,0.031746},
        {0.949206,0.000000,0.025397},
        {0.961905,0.000000,0.019048},
        {0.974603,0.000000,0.012698},
        {0.987302,0.000000,0.006349},
        {1.000000,0.000000,0.000000},
        {1.000000,0.000000,0.000000},
        {1.000000,0.016216,0.000000},
        {1.000000,0.032432,0.000000},
        {1.000000,0.048649,0.000000},
        {1.000000,0.064865,0.000000},
        {1.000000,0.081081,0.000000},
        {1.000000,0.097297,0.000000},
        {1.000000,0.113514,0.000000},
        {1.000000,0.129730,0.000000},
        {1.000000,0.145946,0.000000},
        {1.000000,0.162162,0.000000},
        {1.000000,0.178378,0.000000},
        {1.000000,0.194595,0.000000},
        {1.000000,0.210811,0.000000},
        {1.000000,0.227027,0.000000},
        {1.000000,0.243243,0.000000},
        {1.000000,0.259459,0.000000},
        {1.000000,0.275676,0.000000},
        {1.000000,0.291892,0.000000},
        {1.000000,0.308108,0.000000},
        {1.000000,0.324324,0.000000},
        {1.000000,0.340541,0.000000},
        {1.000000,0.356757,0.000000},
        {1.000000,0.372973,0.000000},
        {1.000000,0.389189,0.000000},
        {1.000000,0.405405,0.000000},
        {1.000000,0.421622,0.000000},
        {1.000000,0.437838,0.000000},
        {1.000000,0.454054,0.000000},
        {1.000000,0.470270,0.000000},
        {1.000000,0.486486,0.000000},
        {1.000000,0.502703,0.000000},
        {1.000000,0.518919,0.000000},
        {1.000000,0.535135,0.000000},
        {1.000000,0.551351,0.000000},
        {1.000000,0.567568,0.000000},
        {1.000000,0.583784,0.000000},
        {1.000000,0.600000,0.000000},
        {1.000000,0.600000,0.000000},
        {1.000000,0.616000,0.000000},
        {1.000000,0.632000,0.000000},
        {1.000000,0.648000,0.000000},
        {1.000000,0.664000,0.000000},
        {1.000000,0.680000,0.000000},
        {1.000000,0.696000,0.000000},
        {1.000000,0.712000,0.000000},
        {1.000000,0.728000,0.000000},
        {1.000000,0.744000,0.000000},
        {1.000000,0.760000,0.000000},
        {1.000000,0.776000,0.000000},
        {1.000000,0.792000,0.000000},
        {1.000000,0.808000,0.000000},
        {1.000000,0.824000,0.000000},
        {1.000000,0.840000,0.000000},
        {1.000000,0.856000,0.000000},
        {1.000000,0.872000,0.000000},
        {1.000000,0.888000,0.000000},
        {1.000000,0.904000,0.000000},
        {1.000000,0.920000,0.000000},
        {1.000000,0.936000,0.000000},
        {1.000000,0.952000,0.000000},
        {1.000000,0.968000,0.000000},
        {1.000000,0.984000,0.000000},
        {1.000000,1.000000,0.000000},
        {1.000000,1.000000,0.000000},
        {1.000000,1.000000,0.015873},
        {1.000000,1.000000,0.031746},
        {1.000000,1.000000,0.047619},
        {1.000000,1.000000,0.063492},
        {1.000000,1.000000,0.079365},
        {1.000000,1.000000,0.095238},
        {1.000000,1.000000,0.111111},
        {1.000000,1.000000,0.126984},
        {1.000000,1.000000,0.142857},
        {1.000000,1.000000,0.158730},
        {1.000000,1.000000,0.174603},
        {1.000000,1.000000,0.190476},
        {1.000000,1.000000,0.206349},
        {1.000000,1.000000,0.222222},
        {1.000000,1.000000,0.238095},
        {1.000000,1.000000,0.253968},
        {1.000000,1.000000,0.269841},
        {1.000000,1.000000,0.285714},
        {1.000000,1.000000,0.301587},
        {1.000000,1.000000,0.317460},
        {1.000000,1.000000,0.333333},
        {1.000000,1.000000,0.349206},
        {1.000000,1.000000,0.365079},
        {1.000000,1.000000,0.380952},
        {1.000000,1.000000,0.396825},
        {1.000000,1.000000,0.412698},
        {1.000000,1.000000,0.428571},
        {1.000000,1.000000,0.444444},
        {1.000000,1.000000,0.460317},
        {1.000000,1.000000,0.476190},
        {1.000000,1.000000,0.492063},
        {1.000000,1.000000,0.507937},
        {1.000000,1.000000,0.523810},
        {1.000000,1.000000,0.539683},
        {1.000000,1.000000,0.555556},
        {1.000000,1.000000,0.571429},
        {1.000000,1.000000,0.587302},
        {1.000000,1.000000,0.603175},
        {1.000000,1.000000,0.619048},
        {1.000000,1.000000,0.634921},
        {1.000000,1.000000,0.650794},
        {1.000000,1.000000,0.666667},
        {1.000000,1.000000,0.682540},
        {1.000000,1.000000,0.698413},
        {1.000000,1.000000,0.714286},
        {1.000000,1.000000,0.730159},
        {1.000000,1.000000,0.746032},
        {1.000000,1.000000,0.761905},
        {1.000000,1.000000,0.777778},
        {1.000000,1.000000,0.793651},
        {1.000000,1.000000,0.809524},
        {1.000000,1.000000,0.825397},
        {1.000000,1.000000,0.841270},
        {1.000000,1.000000,0.857143},
        {1.000000,1.000000,0.873016},
        {1.000000,1.000000,0.888889},
        {1.000000,1.000000,0.904762},
        {1.000000,1.000000,0.920635},
        {1.000000,1.000000,0.936508},
        {1.000000,1.000000,0.952381},
        {1.000000,1.000000,0.968254},
        {1.000000,1.000000,0.984127},
        {1.000000,1.000000,1.000000},

    };


    const Colormap ParulaColormap = {
        {0.208100,0.166300,0.529200},
        {0.211624,0.189781,0.577676},
        {0.212252,0.213771,0.626971},
        {0.208100,0.238600,0.677086},
        {0.195905,0.264457,0.727900},
        {0.170729,0.291938,0.779248},
        {0.125271,0.324243,0.830271},
        {0.059133,0.359833,0.868333},
        {0.011695,0.387510,0.881957},
        {0.005957,0.408614,0.882843},
        {0.016514,0.426600,0.878633},
        {0.032852,0.443043,0.871957},
        {0.049814,0.458571,0.864057},
        {0.062933,0.473690,0.855438},
        {0.072267,0.488667,0.846700},
        {0.077943,0.503986,0.838371},
        {0.079348,0.520024,0.831181},
        {0.074943,0.537543,0.826271},
        {0.064057,0.556986,0.823957},
        {0.048771,0.577224,0.822829},
        {0.034343,0.596581,0.819852},
        {0.026500,0.613700,0.813500},
        {0.023890,0.628662,0.803762},
        {0.023090,0.641786,0.791267},
        {0.022771,0.653486,0.776757},
        {0.026662,0.664195,0.760719},
        {0.038371,0.674271,0.743552},
        {0.058971,0.683757,0.725386},
        {0.084300,0.692833,0.706167},
        {0.113295,0.701500,0.685857},
        {0.145271,0.709757,0.664629},
        {0.180133,0.717657,0.642433},
        {0.217829,0.725043,0.619262},
        {0.258643,0.731714,0.595429},
        {0.302171,0.737605,0.571186},
        {0.348167,0.742433,0.547267},
        {0.395257,0.745900,0.524443},
        {0.442010,0.748081,0.503314},
        {0.487124,0.749062,0.483976},
        {0.530029,0.749114,0.466114},
        {0.570857,0.748519,0.449390},
        {0.609852,0.747314,0.433686},
        {0.647300,0.745600,0.418800},
        {0.683419,0.743476,0.404433},
        {0.718410,0.741133,0.390476},
        {0.752486,0.738400,0.376814},
        {0.785843,0.735567,0.363271},
        {0.818505,0.732733,0.349790},
        {0.850657,0.729900,0.336029},
        {0.882433,0.727433,0.321700},
        {0.913933,0.725786,0.306276},
        {0.944957,0.726114,0.288643},
        {0.973895,0.731395,0.266648},
        {0.993771,0.745457,0.240348},
        {0.999043,0.765314,0.216414},
        {0.995533,0.786057,0.196652},
        {0.988000,0.806600,0.179367},
        {0.978857,0.827143,0.163314},
        {0.969700,0.848138,0.147452},
        {0.962586,0.870514,0.130900},
        {0.958871,0.894900,0.113243},
        {0.959824,0.921833,0.094838},
        {0.966100,0.951443,0.075533},
        {0.976300,0.983100,0.053800},

    };

    const Colormap HSVColormap = {
        {1.000000,0.000000,0.000000},
        {1.000000,0.093750,0.000000},
        {1.000000,0.187500,0.000000},
        {1.000000,0.281250,0.000000},
        {1.000000,0.375000,0.000000},
        {1.000000,0.468750,0.000000},
        {1.000000,0.562500,0.000000},
        {1.000000,0.656250,0.000000},
        {1.000000,0.750000,0.000000},
        {1.000000,0.843750,0.000000},
        {1.000000,0.937500,0.000000},
        {0.968750,1.000000,0.000000},
        {0.875000,1.000000,0.000000},
        {0.781250,1.000000,0.000000},
        {0.687500,1.000000,0.000000},
        {0.593750,1.000000,0.000000},
        {0.500000,1.000000,0.000000},
        {0.406250,1.000000,0.000000},
        {0.312500,1.000000,0.000000},
        {0.218750,1.000000,0.000000},
        {0.125000,1.000000,0.000000},
        {0.031250,1.000000,0.000000},
        {0.000000,1.000000,0.062500},
        {0.000000,1.000000,0.156250},
        {0.000000,1.000000,0.250000},
        {0.000000,1.000000,0.343750},
        {0.000000,1.000000,0.437500},
        {0.000000,1.000000,0.531250},
        {0.000000,1.000000,0.625000},
        {0.000000,1.000000,0.718750},
        {0.000000,1.000000,0.812500},
        {0.000000,1.000000,0.906250},
        {0.000000,1.000000,1.000000},
        {0.000000,0.906250,1.000000},
        {0.000000,0.812500,1.000000},
        {0.000000,0.718750,1.000000},
        {0.000000,0.625000,1.000000},
        {0.000000,0.531250,1.000000},
        {0.000000,0.437500,1.000000},
        {0.000000,0.343750,1.000000},
        {0.000000,0.250000,1.000000},
        {0.000000,0.156250,1.000000},
        {0.000000,0.062500,1.000000},
        {0.031250,0.000000,1.000000},
        {0.125000,0.000000,1.000000},
        {0.218750,0.000000,1.000000},
        {0.312500,0.000000,1.000000},
        {0.406250,0.000000,1.000000},
        {0.500000,0.000000,1.000000},
        {0.593750,0.000000,1.000000},
        {0.687500,0.000000,1.000000},
        {0.781250,0.000000,1.000000},
        {0.875000,0.000000,1.000000},
        {0.968750,0.000000,1.000000},
        {1.000000,0.000000,0.937500},
        {1.000000,0.000000,0.843750},
        {1.000000,0.000000,0.750000},
        {1.000000,0.000000,0.656250},
        {1.000000,0.000000,0.562500},
        {1.000000,0.000000,0.468750},
        {1.000000,0.000000,0.375000},
        {1.000000,0.000000,0.281250},
        {1.000000,0.000000,0.187500},
        {1.000000,0.000000,0.093750},

    };

    const Colormap HotColormap = {
        {0.041667,0.000000,0.000000},
        {0.083333,0.000000,0.000000},
        {0.125000,0.000000,0.000000},
        {0.166667,0.000000,0.000000},
        {0.208333,0.000000,0.000000},
        {0.250000,0.000000,0.000000},
        {0.291667,0.000000,0.000000},
        {0.333333,0.000000,0.000000},
        {0.375000,0.000000,0.000000},
        {0.416667,0.000000,0.000000},
        {0.458333,0.000000,0.000000},
        {0.500000,0.000000,0.000000},
        {0.541667,0.000000,0.000000},
        {0.583333,0.000000,0.000000},
        {0.625000,0.000000,0.000000},
        {0.666667,0.000000,0.000000},
        {0.708333,0.000000,0.000000},
        {0.750000,0.000000,0.000000},
        {0.791667,0.000000,0.000000},
        {0.833333,0.000000,0.000000},
        {0.875000,0.000000,0.000000},
        {0.916667,0.000000,0.000000},
        {0.958333,0.000000,0.000000},
        {1.000000,0.000000,0.000000},
        {1.000000,0.041667,0.000000},
        {1.000000,0.083333,0.000000},
        {1.000000,0.125000,0.000000},
        {1.000000,0.166667,0.000000},
        {1.000000,0.208333,0.000000},
        {1.000000,0.250000,0.000000},
        {1.000000,0.291667,0.000000},
        {1.000000,0.333333,0.000000},
        {1.000000,0.375000,0.000000},
        {1.000000,0.416667,0.000000},
        {1.000000,0.458333,0.000000},
        {1.000000,0.500000,0.000000},
        {1.000000,0.541667,0.000000},
        {1.000000,0.583333,0.000000},
        {1.000000,0.625000,0.000000},
        {1.000000,0.666667,0.000000},
        {1.000000,0.708333,0.000000},
        {1.000000,0.750000,0.000000},
        {1.000000,0.791667,0.000000},
        {1.000000,0.833333,0.000000},
        {1.000000,0.875000,0.000000},
        {1.000000,0.916667,0.000000},
        {1.000000,0.958333,0.000000},
        {1.000000,1.000000,0.000000},
        {1.000000,1.000000,0.062500},
        {1.000000,1.000000,0.125000},
        {1.000000,1.000000,0.187500},
        {1.000000,1.000000,0.250000},
        {1.000000,1.000000,0.312500},
        {1.000000,1.000000,0.375000},
        {1.000000,1.000000,0.437500},
        {1.000000,1.000000,0.500000},
        {1.000000,1.000000,0.562500},
        {1.000000,1.000000,0.625000},
        {1.000000,1.000000,0.687500},
        {1.000000,1.000000,0.750000},
        {1.000000,1.000000,0.812500},
        {1.000000,1.000000,0.875000},
        {1.000000,1.000000,0.937500},
        {1.000000,1.000000,1.000000},

    };

    const Colormap CoolColormap = {
        {0.000000,1.000000,1.000000},
        {0.015873,0.984127,1.000000},
        {0.031746,0.968254,1.000000},
        {0.047619,0.952381,1.000000},
        {0.063492,0.936508,1.000000},
        {0.079365,0.920635,1.000000},
        {0.095238,0.904762,1.000000},
        {0.111111,0.888889,1.000000},
        {0.126984,0.873016,1.000000},
        {0.142857,0.857143,1.000000},
        {0.158730,0.841270,1.000000},
        {0.174603,0.825397,1.000000},
        {0.190476,0.809524,1.000000},
        {0.206349,0.793651,1.000000},
        {0.222222,0.777778,1.000000},
        {0.238095,0.761905,1.000000},
        {0.253968,0.746032,1.000000},
        {0.269841,0.730159,1.000000},
        {0.285714,0.714286,1.000000},
        {0.301587,0.698413,1.000000},
        {0.317460,0.682540,1.000000},
        {0.333333,0.666667,1.000000},
        {0.349206,0.650794,1.000000},
        {0.365079,0.634921,1.000000},
        {0.380952,0.619048,1.000000},
        {0.396825,0.603175,1.000000},
        {0.412698,0.587302,1.000000},
        {0.428571,0.571429,1.000000},
        {0.444444,0.555556,1.000000},
        {0.460317,0.539683,1.000000},
        {0.476190,0.523810,1.000000},
        {0.492063,0.507937,1.000000},
        {0.507937,0.492063,1.000000},
        {0.523810,0.476190,1.000000},
        {0.539683,0.460317,1.000000},
        {0.555556,0.444444,1.000000},
        {0.571429,0.428571,1.000000},
        {0.587302,0.412698,1.000000},
        {0.603175,0.396825,1.000000},
        {0.619048,0.380952,1.000000},
        {0.634921,0.365079,1.000000},
        {0.650794,0.349206,1.000000},
        {0.666667,0.333333,1.000000},
        {0.682540,0.317460,1.000000},
        {0.698413,0.301587,1.000000},
        {0.714286,0.285714,1.000000},
        {0.730159,0.269841,1.000000},
        {0.746032,0.253968,1.000000},
        {0.761905,0.238095,1.000000},
        {0.777778,0.222222,1.000000},
        {0.793651,0.206349,1.000000},
        {0.809524,0.190476,1.000000},
        {0.825397,0.174603,1.000000},
        {0.841270,0.158730,1.000000},
        {0.857143,0.142857,1.000000},
        {0.873016,0.126984,1.000000},
        {0.888889,0.111111,1.000000},
        {0.904762,0.095238,1.000000},
        {0.920635,0.079365,1.000000},
        {0.936508,0.063492,1.000000},
        {0.952381,0.047619,1.000000},
        {0.968254,0.031746,1.000000},
        {0.984127,0.015873,1.000000},
        {1.000000,0.000000,1.000000},

    };

    const Colormap SpringColormap = {
        {1.000000,0.000000,1.000000},
        {1.000000,0.015873,0.984127},
        {1.000000,0.031746,0.968254},
        {1.000000,0.047619,0.952381},
        {1.000000,0.063492,0.936508},
        {1.000000,0.079365,0.920635},
        {1.000000,0.095238,0.904762},
        {1.000000,0.111111,0.888889},
        {1.000000,0.126984,0.873016},
        {1.000000,0.142857,0.857143},
        {1.000000,0.158730,0.841270},
        {1.000000,0.174603,0.825397},
        {1.000000,0.190476,0.809524},
        {1.000000,0.206349,0.793651},
        {1.000000,0.222222,0.777778},
        {1.000000,0.238095,0.761905},
        {1.000000,0.253968,0.746032},
        {1.000000,0.269841,0.730159},
        {1.000000,0.285714,0.714286},
        {1.000000,0.301587,0.698413},
        {1.000000,0.317460,0.682540},
        {1.000000,0.333333,0.666667},
        {1.000000,0.349206,0.650794},
        {1.000000,0.365079,0.634921},
        {1.000000,0.380952,0.619048},
        {1.000000,0.396825,0.603175},
        {1.000000,0.412698,0.587302},
        {1.000000,0.428571,0.571429},
        {1.000000,0.444444,0.555556},
        {1.000000,0.460317,0.539683},
        {1.000000,0.476190,0.523810},
        {1.000000,0.492063,0.507937},
        {1.000000,0.507937,0.492063},
        {1.000000,0.523810,0.476190},
        {1.000000,0.539683,0.460317},
        {1.000000,0.555556,0.444444},
        {1.000000,0.571429,0.428571},
        {1.000000,0.587302,0.412698},
        {1.000000,0.603175,0.396825},
        {1.000000,0.619048,0.380952},
        {1.000000,0.634921,0.365079},
        {1.000000,0.650794,0.349206},
        {1.000000,0.666667,0.333333},
        {1.000000,0.682540,0.317460},
        {1.000000,0.698413,0.301587},
        {1.000000,0.714286,0.285714},
        {1.000000,0.730159,0.269841},
        {1.000000,0.746032,0.253968},
        {1.000000,0.761905,0.238095},
        {1.000000,0.777778,0.222222},
        {1.000000,0.793651,0.206349},
        {1.000000,0.809524,0.190476},
        {1.000000,0.825397,0.174603},
        {1.000000,0.841270,0.158730},
        {1.000000,0.857143,0.142857},
        {1.000000,0.873016,0.126984},
        {1.000000,0.888889,0.111111},
        {1.000000,0.904762,0.095238},
        {1.000000,0.920635,0.079365},
        {1.000000,0.936508,0.063492},
        {1.000000,0.952381,0.047619},
        {1.000000,0.968254,0.031746},
        {1.000000,0.984127,0.015873},
        {1.000000,1.000000,0.000000},

    };

    const Colormap SummerColormap = {
        {0.000000,0.500000,0.400000},
        {0.015873,0.507937,0.400000},
        {0.031746,0.515873,0.400000},
        {0.047619,0.523810,0.400000},
        {0.063492,0.531746,0.400000},
        {0.079365,0.539683,0.400000},
        {0.095238,0.547619,0.400000},
        {0.111111,0.555556,0.400000},
        {0.126984,0.563492,0.400000},
        {0.142857,0.571429,0.400000},
        {0.158730,0.579365,0.400000},
        {0.174603,0.587302,0.400000},
        {0.190476,0.595238,0.400000},
        {0.206349,0.603175,0.400000},
        {0.222222,0.611111,0.400000},
        {0.238095,0.619048,0.400000},
        {0.253968,0.626984,0.400000},
        {0.269841,0.634921,0.400000},
        {0.285714,0.642857,0.400000},
        {0.301587,0.650794,0.400000},
        {0.317460,0.658730,0.400000},
        {0.333333,0.666667,0.400000},
        {0.349206,0.674603,0.400000},
        {0.365079,0.682540,0.400000},
        {0.380952,0.690476,0.400000},
        {0.396825,0.698413,0.400000},
        {0.412698,0.706349,0.400000},
        {0.428571,0.714286,0.400000},
        {0.444444,0.722222,0.400000},
        {0.460317,0.730159,0.400000},
        {0.476190,0.738095,0.400000},
        {0.492063,0.746032,0.400000},
        {0.507937,0.753968,0.400000},
        {0.523810,0.761905,0.400000},
        {0.539683,0.769841,0.400000},
        {0.555556,0.777778,0.400000},
        {0.571429,0.785714,0.400000},
        {0.587302,0.793651,0.400000},
        {0.603175,0.801587,0.400000},
        {0.619048,0.809524,0.400000},
        {0.634921,0.817460,0.400000},
        {0.650794,0.825397,0.400000},
        {0.666667,0.833333,0.400000},
        {0.682540,0.841270,0.400000},
        {0.698413,0.849206,0.400000},
        {0.714286,0.857143,0.400000},
        {0.730159,0.865079,0.400000},
        {0.746032,0.873016,0.400000},
        {0.761905,0.880952,0.400000},
        {0.777778,0.888889,0.400000},
        {0.793651,0.896825,0.400000},
        {0.809524,0.904762,0.400000},
        {0.825397,0.912698,0.400000},
        {0.841270,0.920635,0.400000},
        {0.857143,0.928571,0.400000},
        {0.873016,0.936508,0.400000},
        {0.888889,0.944444,0.400000},
        {0.904762,0.952381,0.400000},
        {0.920635,0.960317,0.400000},
        {0.936508,0.968254,0.400000},
        {0.952381,0.976190,0.400000},
        {0.968254,0.984127,0.400000},
        {0.984127,0.992063,0.400000},
        {1.000000,1.000000,0.400000},

    };

    static std::map<QString, Colormap> ColorTable{
        {QString("Jet"),   JetColormap},
        {QString("Violet Fire"),   VioletFireColormap},
        {QString("Parula"),   ParulaColormap},
        {QString("HSV"),   HSVColormap},
        {QString("Hot"),   HotColormap},
        {QString("Cool"),   CoolColormap},
        {QString("Spring"),   SpringColormap},
        {QString("Summer"),   SummerColormap},
        {QString("Gray"),  GrayColormap},
        {QString("Red"),   RedColormap},
        {QString("Blue"),  BlueColormap},
        {QString("Green"), GreenColormap},
    };

	class Colormapper{
	public:
		Colormapper(const Colormap& cmap) : colormap(cmap){};
        QRgb getColor(const double value, const double contrastMin, const double contrastMax);
	    void setColormap(const Colormap& cmap);
	private:
		Colormap colormap;
	};
}

#endif //PRISMCOLORMAPS_H