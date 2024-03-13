#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LongIdComponent.h" 

class LastSessionComponent : public LongIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LastSessionComponent"));
	}



};

