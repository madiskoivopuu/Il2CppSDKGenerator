#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class IntValueComponent : public TypeValueComponent1<int32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(IntValueComponent*, uintptr_t))(Il2CppBase() + 0x146A374))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(IntValueComponent*, uintptr_t))(Il2CppBase() + 0x146A3E0))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(IntValueComponent*, Il2CppObject*))(Il2CppBase() + 0x146A404))(this, blueprintComponent);
	}

};

