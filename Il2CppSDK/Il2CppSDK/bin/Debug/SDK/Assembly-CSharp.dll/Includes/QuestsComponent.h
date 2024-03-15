#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNamesComponent.h" 

class QuestsComponent : public StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsComponent"));
	}

	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(QuestsComponent*, Il2CppObject*))(Il2CppBase() + 0x1707228))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(QuestsComponent*, Il2CppObject*))(Il2CppBase() + 0x17072CC))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(QuestsComponent*, uintptr_t))(Il2CppBase() + 0x1707384))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(QuestsComponent*, uintptr_t))(Il2CppBase() + 0x1707404))(this, writer);
	}

};

