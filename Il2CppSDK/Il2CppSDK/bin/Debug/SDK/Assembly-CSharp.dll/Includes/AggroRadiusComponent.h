#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggroRadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AggroRadiusComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& SeesInvisible() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AggroRadiusComponent*, Il2CppObject*))(Il2CppBase() + 0x129BD10))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(AggroRadiusComponent*, Il2CppObject*))(Il2CppBase() + 0x129BDB8))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AggroRadiusComponent*, uintptr_t))(Il2CppBase() + 0x129BE94))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AggroRadiusComponent*, uintptr_t))(Il2CppBase() + 0x129BF5C))(this, writer);
	}

};

