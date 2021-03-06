/******************************************************************************\
 * Header:  module_dsp_long_reverb_conf
 * File:    module_dsp_long_reverb_conf.h
 *
 * Description: Definitions for configuration of application.
 *							NB These definitions will be passed to all modules used in application
 *
 * Version: 0v1
 * Build:
 *
 * The copyrights, all other intellectual and industrial
 * property rights are retained by XMOS and/or its licensors.
 * Terms and conditions covering the use of this code can
 * be found in the Xmos End User License Agreement.
 *
 * Copyright XMOS Ltd 2012
 *
 * In the case where this code is a modification of existing code
 * under a separate license, the separate license terms are shown
 * below. The modifications to the code are still covered by the
 * copyright notice above.
 *
\******************************************************************************/

#ifndef _MODULE_DSP_LONG_REVERB_CONF_H_
#define _MODULE_DSP_LONG_REVERB_CONF_H_

#include "app_conf.h"

/** Number of audio channels used in long-reverb module */
#define NUM_REVERB_CHANS NUM_APP_CHANS

/** Number of delay-taps used in long-reverb module */
#define NUM_REVERB_TAPS NUM_APP_TAPS

#endif // _MODULE_DSP_LONG_REVERB_CONF_H_
/******************************************************************************/
// module_dsp_long_reverb_conf.h
