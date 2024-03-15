#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdComponent1.h" 

class IntIdComponent : public TypeIdComponent1<int32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntIdComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(IntIdComponent*, uintptr_t))(Il2CppBase() + 0x14693F0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(IntIdComponent*, uintptr_t))(Il2CppBase() + 0x146945C))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(IntIdComponent*, Il2CppObject*))(Il2CppBase() + 0x1469480))(this, blueprintComponent);
	}

};

