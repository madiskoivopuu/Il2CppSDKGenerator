#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InteractTemplate.h" 

class EnemyInteractComponent : public InteractTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyInteractComponent"));
	}



};
