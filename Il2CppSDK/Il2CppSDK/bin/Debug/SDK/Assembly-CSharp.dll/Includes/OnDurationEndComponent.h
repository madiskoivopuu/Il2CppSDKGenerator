#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDurationEndComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDurationEndComponent"));
	}

	template <typename T = Nullable1int32_t>*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SpawnMagic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpawnMagics() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Death() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(OnDurationEndComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC74C))(this, targetObject);
	}

};

