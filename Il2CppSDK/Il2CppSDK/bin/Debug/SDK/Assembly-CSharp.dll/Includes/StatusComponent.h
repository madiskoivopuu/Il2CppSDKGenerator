#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumValueComponent1.h" 
#include "ServerStatus.h" 

class StatusComponent : public EnumValueComponent1<ServerStatus>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusComponent"));
	}



};

