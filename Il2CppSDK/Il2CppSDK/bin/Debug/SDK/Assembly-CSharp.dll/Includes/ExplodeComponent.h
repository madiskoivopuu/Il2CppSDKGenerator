#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeComponent"));
	}

	template <typename R = Il2CppString*> R& Item() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ExplodeType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ExplodeComponent*, Il2CppObject*))(Il2CppBase() + 0x1685498))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ExplodeComponent*, Il2CppObject*))(Il2CppBase() + 0x168553C))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ExplodeComponent*, uintptr_t))(Il2CppBase() + 0x16855F4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ExplodeComponent*, uintptr_t))(Il2CppBase() + 0x168569C))(this, writer);
	}

};

