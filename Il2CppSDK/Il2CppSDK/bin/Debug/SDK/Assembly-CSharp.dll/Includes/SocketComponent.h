#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocketComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocketComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IgnoreRotation() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SocketComponent*, Il2CppObject*))(Il2CppBase() + 0x1484A6C))(this, targetObject);
	}

};

