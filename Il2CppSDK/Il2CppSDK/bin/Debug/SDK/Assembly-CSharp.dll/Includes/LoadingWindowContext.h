#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingWindowContext"));
	}

	template <typename T = Il2CppString*> T& LocationBlueprint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LocationName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Icon*> T& LocationIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& HintCaption() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& HintDescription() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Icon*> T& HintIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& ShowLore() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& Cyclic() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = Nullable1ValueTuple2int64_t, int64_t>*>*> T& Timer() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C498))(this);
	}
	template <typename T = UIWindowsLayerType*> T get_LayerType() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4A0))(this);
	}
	template <typename T = Il2CppString*> T get_LocationBlueprint() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4A8))(this);
	}
	template <typename T = Il2CppString*> T get_LocationName() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4B0))(this);
	}
	template <typename T = Icon*> T get_LocationIcon() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4B8))(this);
	}
	template <typename T = Il2CppString*> T get_HintCaption() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4C4))(this);
	}
	template <typename T = Il2CppString*> T get_HintDescription() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4CC))(this);
	}
	template <typename T = Icon*> T get_HintIcon() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4D4))(this);
	}
	template <typename T = bool> T get_ShowLore() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4E0))(this);
	}
	template <typename T = bool> T get_Cyclic() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4E8))(this);
	}
	template <typename T = Nullable1ValueTuple2int64_t, int64_t>*>*> T get_Timer() {
		return ((T (*)(LoadingWindowContext*))(Il2CppBase() + 0x115C4F0))(this);
	}

};

