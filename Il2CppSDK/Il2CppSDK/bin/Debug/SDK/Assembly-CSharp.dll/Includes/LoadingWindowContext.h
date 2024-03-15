#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingWindowContext"));
	}

	template <typename R = Il2CppString*> R& LocationBlueprint() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& LocationName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Icon*> R& LocationIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& HintCaption() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& HintDescription() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Icon*> R& HintIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& ShowLore() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& Cyclic() {
		return *(R*)((uintptr_t)this + 0x71);
	}
	 Nullable1ValueTuple2int64_t, int64_t>*>*& Timer() {
		return *(Nullable1ValueTuple2int64_t, int64_t>*>**)((uintptr_t)this + 0x78);
	}

	template <typename R = UIWindowType*> R get_WindowType() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C498))(this);
	}
	template <typename R = UIWindowsLayerType*> R get_LayerType() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4A0))(this);
	}
	template <typename R = Il2CppString*> R get_LocationBlueprint() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4A8))(this);
	}
	template <typename R = Il2CppString*> R get_LocationName() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4B0))(this);
	}
	template <typename R = Icon*> R get_LocationIcon() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4B8))(this);
	}
	template <typename R = Il2CppString*> R get_HintCaption() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4C4))(this);
	}
	template <typename R = Il2CppString*> R get_HintDescription() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4CC))(this);
	}
	template <typename R = Icon*> R get_HintIcon() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4D4))(this);
	}
	template <typename R = bool> R get_ShowLore() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4E0))(this);
	}
	template <typename R = bool> R get_Cyclic() {
		return ((R (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4E8))(this);
	}
	 Nullable1ValueTuple2int64_t, int64_t>*>* get_Timer() {
		return ((Nullable1ValueTuple2int64_t, int64_t>*>* (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4F0))(this);
	}

};

