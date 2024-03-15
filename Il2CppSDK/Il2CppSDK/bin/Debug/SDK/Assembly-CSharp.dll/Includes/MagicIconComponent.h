#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicIconComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicIconComponent"));
	}

	template <typename R = Il2CppString*> R& AssetPath() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = MagicIconShowType> R& Show() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& ShowCount() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = MagicIconViewerType> R& Viewer() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = bool> R& ShowWhenNotActive() {
		return *(R*)((uintptr_t)this + 0x1B);
	}
	template <typename R = bool> R& GroupByActor() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MagicIconComponent*, Il2CppObject*))(Il2CppBase() + 0x1AD9EE8))(this, targetObject);
	}

};

