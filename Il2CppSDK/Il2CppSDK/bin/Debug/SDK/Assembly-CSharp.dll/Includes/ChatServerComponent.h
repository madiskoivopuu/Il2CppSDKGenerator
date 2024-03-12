#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatServerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatServerComponent"));
	}

	template <typename T = Il2CppString*> T& Ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Fqdn() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ChatServerComponent*, uintptr_t))(Il2CppBase() + 0x1736E3C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChatServerComponent*, uintptr_t))(Il2CppBase() + 0x1736EE4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChatServerComponent*, uintptr_t))(Il2CppBase() + 0x1736FE8))(this, writer);
	}

};

}
