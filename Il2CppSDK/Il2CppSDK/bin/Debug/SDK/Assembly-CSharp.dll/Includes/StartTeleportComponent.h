#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseTeleportComponent.h" 

class StartTeleportComponent : public BaseTeleportComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartTeleportComponent"));
	}



};
