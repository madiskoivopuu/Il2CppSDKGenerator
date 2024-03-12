#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntValueComponent" 

class DefaultGradeComponent: IntValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefaultGradeComponent"));
	}



};

}
