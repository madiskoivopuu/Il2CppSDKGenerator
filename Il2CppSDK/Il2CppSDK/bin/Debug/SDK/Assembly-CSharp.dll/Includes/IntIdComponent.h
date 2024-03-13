#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdComponent1.h" 

class IntIdComponent : public TypeIdComponent1<int32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntIdComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(IntIdComponent*, uintptr_t))(Il2CppBase() + 0x14693F0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(IntIdComponent*, uintptr_t))(Il2CppBase() + 0x146945C))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(IntIdComponent*, Il2CppObject*))(Il2CppBase() + 0x1469480))(this, blueprintComponent);
	}

};

