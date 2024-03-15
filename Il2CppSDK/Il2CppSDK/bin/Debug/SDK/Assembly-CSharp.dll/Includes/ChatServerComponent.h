#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatServerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatServerComponent"));
	}

	template <typename R = Il2CppString*> R& Ip() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Fqdn() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChatServerComponent*, Il2CppObject*))(Il2CppBase() + 0x1736E3C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChatServerComponent*, uintptr_t))(Il2CppBase() + 0x1736EE4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChatServerComponent*, uintptr_t))(Il2CppBase() + 0x1736FE8))(this, writer);
	}

};

