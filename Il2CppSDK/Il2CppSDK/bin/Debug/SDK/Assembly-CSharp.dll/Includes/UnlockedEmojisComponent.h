#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListComponent1.h" 

class UnlockedEmojisComponent : public TypeListComponent1<UnlockedEmoji*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedEmojisComponent"));
	}

	template <typename R = int32_t> R& NewEmojisCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UnlockedEmojisComponent*, uintptr_t))(Il2CppBase() + 0x153AFC0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UnlockedEmojisComponent*, uintptr_t))(Il2CppBase() + 0x153B168))(this, writer);
	}

};

