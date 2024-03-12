#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggroRadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AggroRadiusComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SeesInvisible() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AggroRadiusComponent*, uintptr_t))(Il2CppBase() + 0x129BD10))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(AggroRadiusComponent*, uintptr_t))(Il2CppBase() + 0x129BDB8))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AggroRadiusComponent*, uintptr_t))(Il2CppBase() + 0x129BE94))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AggroRadiusComponent*, uintptr_t))(Il2CppBase() + 0x129BF5C))(this, writer);
	}

};

}
