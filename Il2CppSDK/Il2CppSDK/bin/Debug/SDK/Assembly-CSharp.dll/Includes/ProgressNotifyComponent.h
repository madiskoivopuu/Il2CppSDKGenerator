#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressNotifyComponent"));
	}

	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Effect() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ProgressNotifyComponent*, Il2CppObject*))(Il2CppBase() + 0x16E536C))(this, target);
	}

};

