#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommingSoonComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommingSoonComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(CommingSoonComponent*, Il2CppObject*))(Il2CppBase() + 0xE292C8))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CommingSoonComponent*, uintptr_t))(Il2CppBase() + 0xE29368))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CommingSoonComponent*, uintptr_t))(Il2CppBase() + 0xE29404))(this, writer);
	}

};

