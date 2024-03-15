#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeVector3Component1.h" 

class FloatVector3Component : public TypeVector3Component1<float>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatVector3Component"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FloatVector3Component*, uintptr_t))(Il2CppBase() + 0x15F7838))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FloatVector3Component*, uintptr_t))(Il2CppBase() + 0x15F7900))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(FloatVector3Component*, Il2CppObject*))(Il2CppBase() + 0x15F7954))(this, blueprintComponent);
	}

};

