#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseNotifyComponent.h" 

class FailNotifyComponent : public BaseNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FailNotifyComponent"));
	}



};

