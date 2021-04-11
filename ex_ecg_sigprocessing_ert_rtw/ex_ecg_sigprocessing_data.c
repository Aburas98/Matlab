/*
 * File: ex_ecg_sigprocessing_data.c
 *
 * Code generated for Simulink model 'ex_ecg_sigprocessing'.
 *
 * Model version                  : 1.298
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Sat Jan 09 00:19:39 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ex_ecg_sigprocessing.h"
#include "ex_ecg_sigprocessing_private.h"

/* Block parameters (auto storage) */
P_ex_ecg_sigprocessing_T ex_ecg_sigprocessing_P = {
  3.0,                                 /* Mask Parameter: ECGSignalSelector_K
                                        * Referenced by: '<S2>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Constant'
                                        */
  0.0F,                                /* Computed Parameter: Buffer_ic
                                        * Referenced by: '<S1>/Buffer'
                                        */
  0.0F,                                /* Computed Parameter: BandpassFilter_InitialStates
                                        * Referenced by: '<S3>/Bandpass Filter'
                                        */

  /*  Computed Parameter: BandpassFilter_Coefficients
   * Referenced by: '<S3>/Bandpass Filter'
   */
  { -0.000342399144F, -0.000191523344F, -2.53226626E-5F, 6.05802961E-5F,
    2.04155785E-5F, -0.000111584734F, -0.000239283982F, -0.000262103771F,
    -0.00013847393F, 8.38286069E-5F, 0.000291703385F, 0.000374004856F,
    0.000292839424F, 0.00011370056F, -2.85871101E-5F, -1.20997411E-5F,
    0.00019049515F, 0.000484090066F, 0.000700816163F, 0.000702633872F,
    0.000474812521F, 0.000147630213F, -7.56561931E-5F, -4.67507598E-5F,
    0.000222898947F, 0.000552698853F, 0.00069535221F, 0.000494771812F,
    1.941889E-18F, -0.000545531162F, -0.000845278031F, -0.000740617281F,
    -0.000329168281F, 7.60605471E-5F, 0.000135547642F, -0.000291120086F,
    -0.00102989946F, -0.00167514908F, -0.00183485437F, -0.00139046169F,
    -0.000599584426F, 4.1677853E-5F, 0.000107601314F, -0.000466879224F,
    -0.00130936154F, -0.00181719707F, -0.00153666199F, -0.000477603549F,
    0.000850975513F, 0.00173237675F, 0.00169575668F, 0.000845117145F,
    -0.000164681987F, -0.000518605462F, 0.000229211699F, 0.00182615127F,
    0.00342595787F, 0.00409382489F, 0.00341057195F, 0.00178526889F,
    0.00024718832F, -0.000186497171F, 0.000816454645F, 0.00263014482F,
    0.00400764123F, 0.00385327265F, 0.00195520907F, -0.000806301367F,
    -0.00295123784F, -0.00332153472F, -0.0018588719F, 0.000282643392F,
    0.00141172973F, 0.00037783F, -0.00262593804F, -0.00608144607F,
    -0.00803364441F, -0.00732966F, -0.00442306837F, -0.00118546933F,
    0.00022296833F, -0.00124718796F, -0.00476163393F, -0.00800694432F,
    -0.00859410316F, -0.00561641064F, -0.000354915974F, 0.00439214613F,
    0.00601933524F, 0.00382360094F, -0.000402924255F, -0.00336776068F,
    -0.00233115884F, 0.00304199F, 0.0102556571F, 0.0153711941F, 0.0154485134F,
    0.0105322367F, 0.00385146611F, -4.31463777E-5F, 0.00183762971F,
    0.0088109374F, 0.0166253019F, 0.0199061092F, 0.0155622512F, 0.00502623664F,
    -0.00623847498F, -0.011906595F, -0.00884428341F, 0.000492853695F,
    0.00904575F, 0.00925244577F, -0.0020349964F, -0.0208923034F, -0.0379082151F,
    -0.04353524F, -0.0342896134F, -0.0159846712F, -0.00153601065F,
    -0.00389419543F, -0.0276914816F, -0.0644246489F, -0.0945319161F, -0.0961585F,
    -0.0566065498F, 0.0194331743F, 0.109567732F, 0.182166815F, 0.209940955F,
    0.182166815F, 0.109567732F, 0.0194331743F, -0.0566065498F, -0.0961585F,
    -0.0945319161F, -0.0644246489F, -0.0276914816F, -0.00389419543F,
    -0.00153601065F, -0.0159846712F, -0.0342896134F, -0.04353524F,
    -0.0379082151F, -0.0208923034F, -0.0020349964F, 0.00925244577F, 0.00904575F,
    0.000492853695F, -0.00884428341F, -0.011906595F, -0.00623847498F,
    0.00502623664F, 0.0155622512F, 0.0199061092F, 0.0166253019F, 0.0088109374F,
    0.00183762971F, -4.31463777E-5F, 0.00385146611F, 0.0105322367F,
    0.0154485134F, 0.0153711941F, 0.0102556571F, 0.00304199F, -0.00233115884F,
    -0.00336776068F, -0.000402924255F, 0.00382360094F, 0.00601933524F,
    0.00439214613F, -0.000354915974F, -0.00561641064F, -0.00859410316F,
    -0.00800694432F, -0.00476163393F, -0.00124718796F, 0.00022296833F,
    -0.00118546933F, -0.00442306837F, -0.00732966F, -0.00803364441F,
    -0.00608144607F, -0.00262593804F, 0.00037783F, 0.00141172973F,
    0.000282643392F, -0.0018588719F, -0.00332153472F, -0.00295123784F,
    -0.000806301367F, 0.00195520907F, 0.00385327265F, 0.00400764123F,
    0.00263014482F, 0.000816454645F, -0.000186497171F, 0.00024718832F,
    0.00178526889F, 0.00341057195F, 0.00409382489F, 0.00342595787F,
    0.00182615127F, 0.000229211699F, -0.000518605462F, -0.000164681987F,
    0.000845117145F, 0.00169575668F, 0.00173237675F, 0.000850975513F,
    -0.000477603549F, -0.00153666199F, -0.00181719707F, -0.00130936154F,
    -0.000466879224F, 0.000107601314F, 4.1677853E-5F, -0.000599584426F,
    -0.00139046169F, -0.00183485437F, -0.00167514908F, -0.00102989946F,
    -0.000291120086F, 0.000135547642F, 7.60605471E-5F, -0.000329168281F,
    -0.000740617281F, -0.000845278031F, -0.000545531162F, 1.941889E-18F,
    0.000494771812F, 0.00069535221F, 0.000552698853F, 0.000222898947F,
    -4.67507598E-5F, -7.56561931E-5F, 0.000147630213F, 0.000474812521F,
    0.000702633872F, 0.000700816163F, 0.000484090066F, 0.00019049515F,
    -1.20997411E-5F, -2.85871101E-5F, 0.00011370056F, 0.000292839424F,
    0.000374004856F, 0.000291703385F, 8.38286069E-5F, -0.00013847393F,
    -0.000262103771F, -0.000239283982F, -0.000111584734F, 2.04155785E-5F,
    6.05802961E-5F, -2.53226626E-5F, -0.000191523344F, -0.000342399144F },
  0.0F,                                /* Computed Parameter: movingAvgwindow_InitialStates
                                        * Referenced by: '<S3>/moving Avg window'
                                        */

  /*  Expression: ones(1, WinSize, 'single')/WinSize
   * Referenced by: '<S3>/moving Avg window'
   */
  { 0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F,
    0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F, 0.0625F }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
