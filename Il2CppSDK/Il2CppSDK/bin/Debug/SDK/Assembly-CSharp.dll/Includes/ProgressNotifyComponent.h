#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressNotifyComponent"));
	}

	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ProgressNotifyComponent*, Il2CppObject*))(Il2CppBase() + 0x16E536C))(this, target);
	}

};

