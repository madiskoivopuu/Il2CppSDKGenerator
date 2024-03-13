#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdComponent1.h" 

class LongIdComponent : public TypeIdComponent1<int64_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongIdComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LongIdComponent*, uintptr_t))(Il2CppBase() + 0x1732218))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LongIdComponent*, uintptr_t))(Il2CppBase() + 0x1732284))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(LongIdComponent*, Il2CppObject*))(Il2CppBase() + 0x17322A8))(this, blueprintComponent);
	}

};

