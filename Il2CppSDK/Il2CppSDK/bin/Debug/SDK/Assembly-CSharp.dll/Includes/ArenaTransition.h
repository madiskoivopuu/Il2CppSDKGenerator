#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "WorldTransition.h" 

class ArenaTransition : public WorldTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaTransition"));
	}



};
