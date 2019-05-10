#!/usr/bin/env python3
from matplotlib import pyplot as plt

x = [i for i in range (100)]
y = [3.56692,3.28529,0.192324,-0.723522,1.10093,0.217484,-2.22963,-1.06868,-0.35082,0.806425,-0.168485,-1.3742,0.131154,0.59425,-0.449029,-2.37823,0.0431789,0.891999,0.564585,1.26432,-1.21881,-0.511385,-0.43555,0.93222,-0.0973298,-0.569741,-1.7985,-1.2402,-1.26264,-0.39984,-0.432221,0.0331915,0.4806,1.56345,0.690144,-0.369499,-0.956152,0.038533,0.100466,-0.0889532,-0.182978,1.66221,-0.805818,0.0169935,0.408217,0.830817,-0.635247,0.717879,0.627076,-1.48508,0.101705,-0.722157,1.67424,-0.264169,1.23845,0.716676,-0.719803,0.96065,0.162052,0.405095,-0.0127202,-0.447488,1.04338,-0.483253,0.00620518,-0.163882,0.878157,1.36977,0.146413,0.293023,0.782585,-0.878082,-0.825785,1.37294,0.249733,-1.09925,0.107963,0.331679,-0.732228,0.0934582,0.435695,0.433699,-2.66614,-1.08565,-0.386446,-0.364989,-0.773265,-0.120422,-0.0212186,0.0251854,1.60065,-0.591333,-0.120543,-1.44198,-0.844537,0.581593,-1.11746,0.724128,0.821082,-1.39626,0.223168,-1.09205,1.4221,0.687532,-0.842157,-1.74242,0.136817,0.649279,0.0106897,-1.11934,-0.302195,-0.00324195,-0.688264,0.839862,-0.812093,0.530089,1.86301,0.444156,0.598972,0.559454,2.16344,-0.336919,1.74813,-2.92619,-2.60417,-0.671786,0.357372,0.022685,1.68521,-0.761405,-0.399895,-0.282711,-1.76841,-0.813951,0.894845,-1.05074,0.942055,0.70701,-0.851364,0.583099,-0.284012,0.987033,0.86892,0.646858,0.099521,-0.154166,-0.783792,-1.81441,0.119691,-1.65569,-0.29991,1.20236,1.93473,0.631895,-1.09682,-1.0395,-1.65381,-1.18177,-0.921379,0.319169,0.246442,-1.65203,1.31475,0.397696,-1.54611,2.17578,1.01638,0.819309,0.175451,-0.277672,-1.3267,1.51727,1.85967,1.14446,1.72174,-1.52445,1.24428,1.09546,0.193769,-0.671794,0.428085,-1.38532,-0.27105,0.5921,0.903502,0.200477,-0.475972,0.738901,-1.277,1.0681,-0.045893,-1.2258,-0.920465,0.416034,0.175835,-0.727271,-0.233871,-0.212166,-1.14389,0.580105,-0.824554,-0.255331,-0.0454459,0.154306,0.550269,-0.138768,-0.100934,-1.10984,1.09552,-1.82688,-0.734558,0.749155,-1.27096,-0.162607,-0.517069,-0.113389,-0.641991,-0.179818,0.0925115,0.767476,-0.0769182,-0.485891,0.49402,1.13781,0.0570467,-0.819823,-0.818145,-0.372201,-0.898002,1.55465,-0.342036,0.413549,0.846724,0.707715,-0.0843608,1.2603,0.582837,-1.65215,-0.139665,-1.51202,0.185694,-0.466657,-1.15582,0.429708,1.37817,0.339866,0.034563,0.0239347,-0.641267,-0.715051,0.0212855,3.854,-0.709709,-0.101757,0.746939,-1.31381,-0.792193,-0.369367,-1.52362,0.919514,-0.730092,0.393687,1.06705,1.89174,-0.533514,-0.503711,1.71053,0.398782,1.44163,-1.71663,-0.101342,0.296268,1.36259,-0.165309,0.838277,-0.182048,-0.69459,0.150067,1.28605,-0.26343,0.128665,1.80654,-0.191061,1.80717,-1.52089,0.712481,1.1919,-1.60091,0.904466,0.447468,0.513424,0.33619,0.155639,-0.00701503,1.01653,1.36929,-1.30444,-1.15414,-0.817885,0.236335,-0.850803,0.0157205,-0.666043,-0.598977,-1.38753,-1.95548,1.56376,-0.721237,0.568367,0.625125,-0.12031,-0.726392,-0.570784,-0.925044,-1.42523,-0.433665,1.67621,1.03899,-0.925411,0.76778,-0.224757,-0.602394,0.711831,-0.313401,-0.356829,-1.96792,-0.803925,-1.3005,0.482765,-1.04028,1.1969,-1.12717,0.447838,-1.29122,0.78952,-0.928315,0.754129,1.40793,1.41021,-0.0347608,-0.797887,-0.398764,-1.14342,-0.154616,-0.275304,0.760976,-0.457129,1.15804,0.370637,-1.46006,-0.974847,-0.607072,-0.831919,-1.06365,0.133613,0.0965713,0.743785,-0.497438,-0.158135,-1.09592,0.0574013,0.609261,-1.25845,-1.00201,-0.542865,0.956593,-0.303814,1.59738,-1.38972,0.931432,0.234573,-0.821872,0.0879102,0.629489,-1.8425,-0.510902,0.32229,-0.766317,-1.03971,0.0111719,-0.122885,-0.0436499,-1.59622,0.0387484,0.0502124,1.87818,0.57021,1.03849,-1.08722,1.56364,-0.699323,-0.0145939,0.0512977,1.28672,-0.119997,-1.02889,-0.635225,-2.23766,1.34128,0.292512,-0.987316,-0.964488,-0.883514,-0.230877,1.09227,-0.210418,0.459698,-0.442184,0.806725,-0.320396,1.85535,2.4296,-1.12693,0.184884,0.591726,1.63459,1.94599,1.23027,0.769262,-0.23413,0.339575,-2.41913,-0.156724,-1.24132,1.02884,0.744424,-1.36864,0.794192,-0.399967,-0.75225,0.764771,-0.427819,-0.196765,2.38203,0.0115189,1.10607,0.102199,0.547791,0.0906877,-1.3928,-1.04757,-0.0727911,-0.198653,-0.856637,1.79757,1.85479,0.215144,0.0878894,-0.950557,-1.09021,0.709972,0.701698,-0.310117,1.04361,-1.22106,0.754631,0.228041,-0.0129296,0.760452,-1.4772,-0.384954,0.5155,-1.67447,0.111871,0.254223,-0.814537,-1.40816,-0.826784,2.00672,0.521126,-0.606606,-1.9952,2.85527,1.43288,0.419806,-0.920625,-2.06328,-0.855938,-1.1996,0.721774,-0.340829,2.0161,1.28317,2.32186,-1.17836,0.144631,0.369449,-0.000360435,-1.41981,0.171339,-1.17747,-0.0055368,-0.810841,-0.371238,0.169118,0.72718,1.68593,0.30334,-0.877979,-0.61605,0.710623,-0.679743,1.71868,0.17673,0.797373,0.465314,0.648543,0.412965,-2.09972,-1.29592,-0.640519,1.93636,-0.830223,-0.872539,0.0477067,0.42133,-1.0055,-0.179582,0.391656,1.11652,-0.15366,-1.26923,0.287227,0.659687,-0.182392,1.26335,1.08377,-0.587466,-1.26977,-0.0536935,1.56665,0.843673,-0.519587,1.30574,0.267382,-0.00833132,1.61743,1.641,0.956916,0.606576,0.704346,0.905863,0.431761,-0.398171,1.15894,-0.611087,-0.38114,-0.727837,-0.522936,0.0271174,-0.567868,-0.185336,-0.54379,1.26188,0.763269,-0.648447,0.30946,-1.06698,1.34817,0.0810744,1.05518,-1.96529,1.18669,-0.302835,2.07607,0.445108,-0.113956,-0.654416,-0.677829,0.58739,-1.63149,-0.401842,1.09648,-1.20992,0.560794,-2.17071,-1.63837,0.479928,0.0241836,1.19191,-1.39894,-0.831024,1.20615,0.505609,0.203533,0.181634,-0.224733,0.637315,-1.16093,-1.47737,1.91948,-1.34888,-0.0950982,-1.56517,-0.533795,0.312698,0.701966,-0.382666,-0.489145,-0.449244,0.640066,2.40363,-1.9255,0.207253,-0.285541,-2.34273,0.376808,0.0706157,0.945039,1.51019,-0.813697,-0.228321,1.1833,-0.087732,0.570868,-0.595541,1.78164,0.195475,0.245395,-1.26474,-0.0779212,0.541123,0.271868,1.24403,0.224596,1.11488,-0.409769,-0.631671,0.547951,-0.299353,-0.38885,-1.66438,0.739184,-1.06709,-0.0329704,0.156287,-0.420835,0.382999,1.22631,0.910056,-0.0532979,-0.0443614,-0.511184,1.12114,-0.788548,0.34363,-0.489175,-0.993682,-0.646532,1.80471,0.519839,0.35131,2.10216,-1.40201,1.19768,1.7262,0.160751,1.13434,-0.841125,0.668471,-1.02204,-0.524606,-0.740344,-0.248496,2.56922,0.980364,0.736076,-0.506153,1.80166,1.47697,0.398972,0.0718127,-0.715645,-1.19265,0.311524,1.86514,-0.856988,0.0666007,0.383528,0.726295,-0.463613,0.917047,0.161605,-0.345941,-1.01843,0.570399,-0.244628,-0.329517,-0.0974396,-0.798051,1.01299,0.630259,-0.0990366,-0.196317,-0.316014,-1.57951,-0.734573,-0.421754,-0.650557,-2.05766,-0.864042,-0.489497,-0.51549,-1.06778,0.370928,-0.959922,-0.0277799,-1.94353,0.156299,0.775409,-0.336441,-2.41135,0.329568,1.47182,1.04581,1.31077,-0.44326,-1.31268,-0.652708,-0.777872,-0.362396,0.0504858,0.096556,-1.15111,-0.877005,-0.303374,0.110583,-1.3353,-1.17473,-0.298081,1.10415,-0.186613,0.983772,-0.188329,-0.159727,-0.823549,0.355528,0.0326998,-0.764016,-1.08743,-0.335993,0.613472,-0.789625,0.378729,1.12249,0.139871,-1.16263,1.59014,-1.35358,-0.963885,-1.27974,3.00567,-1.24538,1.01411,-0.470539,1.52715,0.81369,0.834929,-1.265,-0.389412,0.806584,1.00369,0.4285,0.590828,1.05987,-0.71617,-1.55629,0.0745802,1.28642,-0.715217,-1.06684,-2.15425,1.14931,0.353717,-0.334123,2.05503,0.0276409,-0.538693,-1.33175,0.47863,1.60769,1.02623,1.92559,1.41291,0.840011,-0.9014,0.228159,-0.441824,-1.08334,-0.77371,0.565983,1.42578,-0.384217,0.512781,-0.238282,0.333301,0.635231,0.345094,0.207067,1.03577,-0.0920899,-0.65548,0.537832,-0.0928159,-0.274516,-0.452027,-1.27126,0.520925,-0.418338,1.05411,-0.633533,-1.15475,-0.51754,0.556594,1.36776,0.546028,-0.755924,-0.149526,0.224332,0.455244,-0.569976,0.599823,0.765464,1.20864,0.954206,-1.65585,-1.92521,-0.985629,-0.989477,0.413844,-0.50592,0.0618471,-0.576674,0.758328,0.0432329,-0.507354,1.45317,-1.49926,-1.2809,-0.529832,0.952573,1.81779,0.276017,-1.95177,0.827687,0.0624235,-0.206899,1.35479,-0.874705,-0.403586,0.332938,-0.283995,-0.529705,0.151291,0.579871,1.16488,0.119338,-1.17369,0.0027181,-1.26244,-0.317276,0.706751,1.23303,0.941685,1.01589,1.83907,0.128871,-0.198019,-0.388477,1.64821,0.571744,0.193427,1.90801,0.669273,-0.673246,-1.3075,-0.656706,-1.09976,0.953276,-0.875139,-0.816032,-1.12121,1.04599,0.772201,-0.0258502,0.894259,0.486483,-0.694418,-0.517928,0.241842,0.483356,-0.478818,0.386223,-3.02344,-0.753155,-0.572956,-0.892553,0.284035,1.08861,-0.874075,1.18504,-0.693879,0.675581,0.524732,-1.36069,-0.783436,0.51534,-0.221851,-1.17928,-1.57582,-1.53695,2.83055,-0.143852,-1.37993,1.45424,-0.129482,-1.3592,0.788321,-1.52829,-1.35388,0.640597,-2.37358,1.15984,0.778958,-0.646328,-0.376922,-2.86956,0.831352,1.04379,-0.258613,1.19693,-0.568861,-1.13114,-0.222006,0.582594,0.0665603,0.884018,-0.865977,1.09531,2.18861,-0.722001,-1.63501,0.284065,-0.536933,0.569926,-0.158008,1.44231,-1.15589,-0.196698,-0.312461,0.324799,-1.37412,-0.329961,0.906695,0.418897,1.27608,-0.721544,-1.04853,-0.573819,0.500605,1.23148,1.59631,-0.781703,0.451608,-0.874525,-0.565892,0.0225794,0.189082,0.380243,0.137763,-0.0370053,-0.253474,-1.5696,-0.301515,-0.876645,0.534046,-0.507343,-0.322473,-0.620195,-0.493509,-0.315195,-1.41527,0.810119,-0.402753,0.187576,-0.495184,0.407953,-0.0690025,0.211267,0.232949,-1.13412,0.684015,0.239676,-0.137565,-0.253848,-1.10444,-0.270195,0.573165,0.905978,0.0385695]

plt.hist(y)
plt.show()