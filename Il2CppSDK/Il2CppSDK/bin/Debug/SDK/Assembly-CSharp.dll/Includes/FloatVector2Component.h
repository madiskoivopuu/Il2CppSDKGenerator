#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeVector2Component1.h" 

class FloatVector2Component : public TypeVector2Component1<float>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatVector2Component"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FloatVector2Component*, uintptr_t))(Il2CppBase() + 0x15F760C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FloatVector2Component*, uintptr_t))(Il2CppBase() + 0x15F76A8))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(FloatVector2Component*, Il2CppObject*))(Il2CppBase() + 0x15F76EC))(this, blueprintComponent);
	}

};

