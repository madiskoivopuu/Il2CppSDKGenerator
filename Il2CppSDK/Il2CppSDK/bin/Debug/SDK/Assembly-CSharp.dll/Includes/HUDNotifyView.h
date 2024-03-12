#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDNotifyView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDNotifyView"));
	}

	template <typename T = int32_t> T& _priority() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RectRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _iconBack() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _iconFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _msgText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _additiveText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& BackgroundHolder() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(HUDNotifyView*))(Il2CppBase() + 0x1277E48))(this);
	}
	template <typename T = Il2CppString*> T get_Caption() {
		return ((T (*)(HUDNotifyView*))(Il2CppBase() + 0x1277E50))(this);
	}
	template <typename T = void> T set_Caption(Il2CppString* value) {
		return ((T (*)(HUDNotifyView*, Il2CppString*))(Il2CppBase() + 0x1277E58))(this, value);
	}
	template <typename T = void> T Show(Il2CppString* caption, Il2CppString* msg, Il2CppString* sound, uintptr_t icon, float height) {
		return ((T (*)(HUDNotifyView*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x1277E60))(this, caption, msg, sound, icon, height);
	}
	template <typename T = void> T Show_1(Il2CppString* caption, Il2CppString* msg, Il2CppString* sound, uintptr_t icon, int32_t count) {
		return ((T (*)(HUDNotifyView*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x1277F68))(this, caption, msg, sound, icon, count);
	}
	template <typename T = void> T ShowForNewClass(uintptr_t item, uintptr_t notifyComponent) {
		return ((T (*)(HUDNotifyView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1278388))(this, item, notifyComponent);
	}
	template <typename T = void> T ShowGotRune(uintptr_t runeItem, uintptr_t classItem, int32_t count, Il2CppString* text, Il2CppString* sound, bool ghosty) {
		return ((T (*)(HUDNotifyView*, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1278A4C))(this, runeItem, classItem, count, text, sound, ghosty);
	}
	template <typename T = void> T ShowGotItem(uintptr_t item, int32_t count, Il2CppString* sound, Il2CppString* caption) {
		return ((T (*)(HUDNotifyView*, uintptr_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1278FE0))(this, item, count, sound, caption);
	}
	template <typename T = void> T Show_2() {
		return ((T (*)(HUDNotifyView*))(Il2CppBase() + 0x1279514))(this);
	}
	template <typename T = void> T StopAndDestroy() {
		return ((T (*)(HUDNotifyView*))(Il2CppBase() + 0x127956C))(this);
	}
	template <typename T = uintptr_t> T Showing() {
		return ((T (*)(HUDNotifyView*))(Il2CppBase() + 0x1278310))(this);
	}

};

}
