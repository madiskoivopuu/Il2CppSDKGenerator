#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass460
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass46_0"));
	}

	template <typename T = uintptr_t> T& currentPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& world() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T SelectNextPointb__1(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x1166F68))(this, p);
	}
	template <typename T = float> T SelectNextPointb__2(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x1167084))(this, p);
	}
	template <typename T = bool> T SelectNextPointb__3(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x11670E4))(this, p);
	}
	template <typename T = float> T SelectNextPointb__4(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x1167200))(this, p);
	}
	template <typename T = bool> T SelectNextPointb__5(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x1167260))(this, p);
	}
	template <typename T = float> T SelectNextPointb__6(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x116737C))(this, p);
	}
	template <typename T = bool> T SelectNextPointb__7(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x11673DC))(this, p);
	}
	template <typename T = float> T SelectNextPointb__8(uintptr_t p) {
		return ((T (*)(cDisplayClass460*, uintptr_t))(Il2CppBase() + 0x11674F8))(this, p);
	}

};

}
