#include "AsapNamespace.h"

namespace ASAPSPACE {

int inter2d_xh_index[][3] = {
 {2, 1, 1},
 {2, 2, 1},
 {2, 3, 1},
 {2, 4, 1},
 {2, 1, 2},
 {1, 2, 1},
 {1, 2, 2},
 {2, 1, 3},
 {1, 3, 1},
 {2, 2, 2},
 {2, 3, 2},
 {1, 4, 1},
 {1, 2, 3},
 {2, 1, 4},
 {1, 3, 2},
 {2, 2, 3},
 {-1, -1, -1}
}; //16 items


int inter2d_in2_index[][3] = {
 {1, 1, 1},
 {1, 1, 2},
 {1, 1, 3},
 {1, 1, 4},
 {1, 1, 5},
 {1, 1, 6},
 {1, 2, 1},
 {1, 2, 2},
 {1, 2, 3},
 {1, 2, 4},
 {1, 2, 5},
 {1, 2, 6},
 {1, 3, 1},
 {1, 3, 2},
 {1, 3, 3},
 {1, 3, 4},
 {1, 3, 5},
 {1, 3, 6},
 {1, 4, 1},
 {1, 4, 2},
 {1, 4, 3},
 {1, 4, 4},
 {1, 4, 5},
 {1, 4, 6},
 {1, 5, 1},
 {1, 5, 2},
 {1, 5, 3},
 {1, 5, 4},
 {1, 5, 5},
 {1, 5, 6},
 {1, 6, 1},
 {1, 6, 2},
 {1, 6, 3},
 {1, 6, 4},
 {1, 6, 5},
 {1, 6, 6},
 {2, 1, 1},
 {2, 1, 2},
 {2, 1, 3},
 {2, 1, 4},
 {2, 1, 5},
 {2, 1, 6},
 {2, 2, 1},
 {2, 2, 2},
 {2, 2, 3},
 {2, 2, 4},
 {2, 2, 5},
 {2, 2, 6},
 {2, 3, 1},
 {2, 3, 2},
 {2, 3, 3},
 {2, 3, 4},
 {2, 3, 5},
 {2, 3, 6},
 {2, 4, 1},
 {2, 4, 2},
 {2, 4, 3},
 {2, 4, 4},
 {2, 4, 5},
 {2, 4, 6},
 {2, 5, 1},
 {2, 5, 2},
 {2, 5, 3},
 {2, 5, 4},
 {2, 5, 5},
 {2, 5, 6},
 {2, 6, 1},
 {2, 6, 2},
 {2, 6, 3},
 {2, 6, 4},
 {2, 6, 5},
 {2, 6, 6}
};//72 items


double inter2d_xh_data[] = {
 0,
 0.209336732825038,
 -0.06444961543252535,
 -0.303927546346162,
 0.01,
 0,
 0.003026697473481309,
 -0.1220421462782555,
 0.007860700254745868,
 -0.125123400628709,
 -0.2989052457826418,
 0.01612536456426738,
 0.003179530830731258,
 -0.3075847050665519,
 0.006326248241119585,
 -0.3005291724067579,
 0
}; //16 items


double inter2d_in2_data[][16] = {

 { 0.075667436837, -0.18160184841, 0.13620138631, -0.030266974735, -0.18160184841, 0.43584443618, -0.32688332714, 0.07264073936400001, 0.13620138631, -0.32688332714, 0.24516249535, -0.054480554523, -0.030266974735, 0.07264073936400001, -0.054480554523, 0.012106789894},
 { 0.036530157382, -0.027510004305, 0.011462501794, -0.0015283335725, -0.087672377718, 0.066024010332, -0.027510004305, 0.003668000574, 0.065754283288, -0.049518007749, 0.020632503229, -0.0027510004305, -0.014612062953, 0.011004001722, -0.0045850007175, 0.0006113334289999999},
 { -1.2718123323, 1.1446310991, -0.33385073723, 0.031795308307, 3.0523495975, -2.7471146378, 0.80124176934, -0.076308739938, -2.2892621981, 2.0603359783, -0.60093132701, 0.057231554953, 0.50872493292, -0.45785243963, 0.13354029489, -0.012718123323},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { -0.40332783369, 1.496225858, -1.1221693935, 0.24937097633, 0.53802169851, -1.9704165784, 1.4778124338, -0.32840276307, -0.22417570771, 0.82100690768, -0.61575518076, 0.13683448461, 0.029890094362, -0.10946758769, 0.082100690768, -0.018244597948},
 { -4.9799065202, 6.5254122503, -2.718921771, 0.36252290279, 6.4121304235, -8.3968897515, 3.4987040631, -0.46649387508, -2.6717210098, 3.4987040631, -1.4577933596, 0.19437244795, 0.35622946797, -0.46649387508, 0.19437244795, -0.025916326393},
 { 6.8677865944, -6.1810079349, 1.802793981, -0.17169466486, -9.157048792499999, 8.2413439133, -2.403725308, 0.22892621981, 3.8154369969, -3.4338932972, 1.0015522117, -0.095385924922, -0.50872493292, 0.45785243963, -0.13354029489, 0.012718123323},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { -5.2396933338, 14.200780423, -10.650585318, 2.3667967372, 4.6576726879, -12.606548444, 9.4549113328, -2.1010914073, -1.3584878673, 3.6769099628, -2.7576824721, 0.61281832713, 0.12937979689, -0.35018190122, 0.26263642591, -0.058363650203},
 { 13.664696201, -18.219594934, 7.5914978893, -1.0121997186, -12.298226581, 16.397635441, -6.8323481004, 0.91097974672, 3.5869827527, -4.7826436703, 1.992768196, -0.26570242613, -0.34161740502, 0.45548987336, -0.18978744723, 0.025304992964},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 11.287755195, -33.863265585, 25.397449189, -5.6438775975, -7.7401749908, 23.220524973, -17.415393729, 3.8700874954, 1.7415393729, -5.2246181188, 3.9184635891, -0.87076968647, -0.12900291651, 0.38700874954, -0.29025656216, 0.064501458257},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { -3.4209639171, 10.467421242, -7.5318997411, 1.5321260799, 8.175860778300001, -25.039124687, 18.014544657, -3.6633215426, -5.9388298051, 18.315985647, -13.163390091, 2.6702648455, 1.233932944, -3.864282202, 2.7707451752, -0.5590693828},
 { -3.4522134912, 7.0743092416, -4.1153505597, 0.67603568617, 4.8433440656, -12.779585964, 8.2543934685, -1.4315660399, -4.6750632537, 10.974763079, -6.7699924372, 1.1509008414, 1.5022608139, -3.0566467313, 1.761863802, -0.29007854762},
 { 150.32749491, -136.21998259, 40.154274529, -3.8544627842, -378.85548335, 343.74564654, -101.52948573, 9.7602133183, 284.14161251, -257.8092349, 76.14711429499999, -7.3201599887, -63.142580558, 57.290941089, -16.921580954, 1.6267022197},
 { -215.30929355, 147.64065843, -33.219148147, 2.4606776405, 645.92788064, -442.9219753, 99.657444442, -7.3820329216, -484.44591048, 332.19148147, -74.74308333099999, 5.5365246912, 107.65464677, -73.820329216, 16.609574074, -1.2303388203},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { -7.3123373323, 8.4212187176, -8.0367114683, 2.5507347397, 10.417602097, -13.037295962, 12.072368545, -3.702480376, -5.2620410623, 7.8488088152, -6.8426051837, 1.9454671841, 0.82152491983, -1.375375652, 1.1589982153, -0.31420692621},
 { 162.9960714, -227.15861415, 99.811814853, -13.767121295, -219.0781688, 305.21158368, -134.05468292, 18.485796809, 94.410235947, -131.34171402, 57.59370989, -7.9340942713, -12.866046181, 17.88291483, -7.8336139416, 1.0784729192},
 { -649.1430124, 584.22871116, -170.40004075, 16.22857531, 865.52401653, -778.9716148799999, 227.20005434, -21.638100413, -360.63500689, 324.5715062, -94.666689308, 9.015875172199999, 48.084667585, -43.276200827, 12.622225241, -1.2021166896},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 148.13737559, -372.67486778, 279.50615084, -62.112477964, -135.51439025, 341.97963766, -256.48472825, 56.996606277, 40.209382862, -101.7971181, 76.347838577, -16.96618635, -3.8783473468, 9.8416105657, -7.3812079243, 1.6402684276},
 { -645.63533089, 860.84710785, -358.68629494, 47.824839325, 581.0717978, -774.76239707, 322.81766545, -43.042355393, -169.47927436, 225.97236581, -94.155152422, 12.554020323, 16.140883272, -21.521177696, 8.967157373499999, -1.1956209831},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { -212.74928244, 638.24784733, -478.6858855, 106.37464122, 145.88522225, -437.65566674, 328.24175005, -72.94261112300001, -32.824175005, 98.47252501600001, -73.854393762, 16.412087503, 2.4314203708, -7.2942611123, 5.4706958342, -1.2157101854},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};//72 items

} // end namespace

