#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CopyToComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CopyToComponentHelper"));
	}


	template <typename R = void> static R ReplaceCopyComponent(uintptr_t entity, int32_t index, uintptr_t sourceComponent) {
		return ((R (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(0, entity, index, sourceComponent);
	}

};

