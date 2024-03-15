#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TickComponent.h" 

class ServerTickComponent : public TickComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerTickComponent"));
	}



};

