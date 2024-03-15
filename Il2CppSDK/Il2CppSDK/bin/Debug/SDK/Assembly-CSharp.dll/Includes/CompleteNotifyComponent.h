#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseNotifyComponent.h" 

class CompleteNotifyComponent : public BaseNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompleteNotifyComponent"));
	}



};

