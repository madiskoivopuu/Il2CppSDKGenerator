#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatLine"));
	}

	template <typename R = uintptr_t> R& _title() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _titleText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _record() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _recordText() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R ShowTitle(Il2CppString* text) {
		return ((R (*)(RavenNestStatLine*, Il2CppString*))(Il2CppBase() + 0x138FA84))(this, text);
	}
	template <typename R = void> R ShowRecord(Il2CppString* text) {
		return ((R (*)(RavenNestStatLine*, Il2CppString*))(Il2CppBase() + 0x138FB18))(this, text);
	}

};

