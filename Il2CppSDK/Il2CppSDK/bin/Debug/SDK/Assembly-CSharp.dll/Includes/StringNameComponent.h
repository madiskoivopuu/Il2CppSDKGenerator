#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeNameComponent1.h" 

class StringNameComponent : public TypeNameComponent1<Il2CppString*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringNameComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StringNameComponent*, uintptr_t))(Il2CppBase() + 0x16A01C4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StringNameComponent*, uintptr_t))(Il2CppBase() + 0x16A0230))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(StringNameComponent*, Il2CppObject*))(Il2CppBase() + 0x16A0244))(this, blueprintComponent);
	}

};

