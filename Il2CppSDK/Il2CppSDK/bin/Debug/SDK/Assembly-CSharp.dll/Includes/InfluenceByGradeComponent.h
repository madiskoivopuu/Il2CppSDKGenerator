#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "FloatListComponent.h" 

class InfluenceByGradeComponent : public FloatListComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InfluenceByGradeComponent"));
	}



};
