#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMessageWindow1.h" 

class ErrorMessageWindow : public BaseMessageWindow1<ErrorMessageWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorMessageWindow"));
	}



};

