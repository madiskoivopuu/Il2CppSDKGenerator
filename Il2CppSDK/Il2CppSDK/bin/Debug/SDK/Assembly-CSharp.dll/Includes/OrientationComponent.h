#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ByteValueComponent.h" 

class OrientationComponent : public ByteValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OrientationComponent"));
	}



};

