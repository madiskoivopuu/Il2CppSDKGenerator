#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdComponent1.h" 

class LongIdComponent : public TypeIdComponent1<int64_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongIdComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LongIdComponent*, uintptr_t))(Il2CppBase() + 0x1732218))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LongIdComponent*, uintptr_t))(Il2CppBase() + 0x1732284))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(LongIdComponent*, Il2CppObject*))(Il2CppBase() + 0x17322A8))(this, blueprintComponent);
	}

};

