/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "loop_pipeline.h"

dout_t loop_pipeline(din_t A[N]) {  

  int i,j;
	static dout_t acc;
  
	LOOP_I:for(i=0; i < 20; i++){
		LOOP_J: for(j=0; j < 20; j++){
			acc += A[j] * i;
		}
	}

	return acc;
}
