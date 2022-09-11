/* Generated by Edge Impulse
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 5.599804430371251, 2.6740180310608435, 3.7135009519989173 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 7.699355938557302, 4.125756623550463, 5.1918726090931955 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { -0.8914933800697327, -0.4075777530670166, -0.761493444442749 }, 0.49549083787319753 }
, { { 0.861206591129303, 1.7140803337097168, 2.137396812438965 }, 0.806523160525173 }
, { { 1.0037727355957031, -0.21538817882537842, -0.1546878069639206 }, 0.6766563056299013 }
, { { -1.010459065437317, -0.9846912622451782, -0.8980430364608765 }, 0.5303392627386919 }
, { { 0.9963904023170471, -0.51613849401474, 0.5098097920417786 }, 0.5534067477312943 }
, { { -0.291824072599411, 0.10391173511743546, 0.22944900393486023 }, 0.5085624772959849 }
, { { -0.7187635898590088, 0.42597126960754395, 0.04601448401808739 }, 0.43950911074657195 }
, { { -0.8170983195304871, 0.18577995896339417, -0.5961673259735107 }, 0.47284453589890835 }
, { { 1.644528865814209, 2.1939449310302734, -0.326042503118515 }, 0.48636247121324283 }
, { { 1.4560617208480835, 1.467403769493103, 1.1263717412948608 }, 0.8641190861724892 }
, { { 1.37969970703125, 1.1195018291473389, 2.239544630050659 }, 0.639133930085921 }
, { { 0.980664849281311, 0.41190576553344727, -0.04479137435555458 }, 0.6795035400106952 }
, { { 1.188596487045288, 0.24583372473716736, 1.9297765493392944 }, 0.5037121693268228 }
, { { -1.2729893922805786, -1.4412026405334473, -1.305986762046814 }, 0.40036726607153655 }
, { { 1.3325728178024292, 0.6644827127456665, 1.3417140245437622 }, 0.5518396428662101 }
, { { -0.3224172294139862, -0.39881065487861633, 0.8767614960670471 }, 0.526682526167012 }
, { { -0.7113720178604126, -0.21405121684074402, -0.27618396282196045 }, 0.5543263697057005 }
, { { 0.6033322215080261, -0.7963218092918396, -0.3209231197834015 }, 0.6680617659657445 }
, { { -0.8651156425476074, -0.9313989877700806, -0.3848414719104767 }, 0.45735692993249255 }
, { { -0.39111724495887756, -0.8600726127624512, 0.3732260763645172 }, 0.45597696109879277 }
, { { 1.0859450101852417, 0.4738333225250244, 0.7331558465957642 }, 0.5203492456369225 }
, { { 0.49407434463500977, 2.02717661857605, 0.08810395747423172 }, 0.7751731969333248 }
, { { -0.360933780670166, -0.5772016048431396, -0.6113715171813965 }, 0.560844845014775 }
, { { -0.06039871647953987, -0.9377061128616333, -0.15821124613285065 }, 0.6287411070554485 }
, { { 0.7709587216377258, -0.5781984925270081, 1.7928134202957153 }, 0.5850161007545644 }
, { { -0.9114298224449158, 0.6556581258773804, -0.6725402474403381 }, 0.6449472068593612 }
, { { -0.6791455149650574, 1.134087085723877, -0.17048990726470947 }, 0.6222994126015883 }
, { { 0.9640430212020874, 2.685920476913452, 0.28332316875457764 }, 0.8534010199455245 }
, { { 1.5417710542678833, 1.5802236795425415, -0.6604230403900146 }, 0.5204378372175564 }
, { { 0.995983898639679, 0.04675474762916565, 1.2203054428100586 }, 0.6125445814007344 }
, { { -0.2984805405139923, 0.4354442059993744, -0.4594360589981079 }, 0.9056481983168332 }
, { { 0.2612108588218689, 0.5536293387413025, 2.1877803802490234 }, 0.7618647520141303 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
