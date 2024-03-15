#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommingSoonComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommingSoonComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CommingSoonComponent*, Il2CppObject*))(Il2CppBase() + 0xE292C8))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CommingSoonComponent*, uintptr_t))(Il2CppBase() + 0xE29368))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CommingSoonComponent*, uintptr_t))(Il2CppBase() + 0xE29404))(this, writer);
	}

};

