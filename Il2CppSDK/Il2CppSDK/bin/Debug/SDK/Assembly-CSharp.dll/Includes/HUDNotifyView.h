#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDNotifyView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDNotifyView"));
	}

	template <typename R = int32_t> R& _priority() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& RectRoot() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _iconBack() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _iconFrame() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _msgText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _additiveText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _count() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& BackgroundHolder() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = int32_t> R get_Priority() {
		return ((R (*)(HUDNotifyView*))(Il2CppBase() + 0x1277E48))(this);
	}
	template <typename R = Il2CppString*> R get_Caption() {
		return ((R (*)(HUDNotifyView*))(Il2CppBase() + 0x1277E50))(this);
	}
	template <typename R = void> R set_Caption(Il2CppString* value) {
		return ((R (*)(HUDNotifyView*, Il2CppString*))(Il2CppBase() + 0x1277E58))(this, value);
	}
	template <typename R = void> R Show(Il2CppString* caption, Il2CppString* msg, Il2CppString* sound, Icon icon, float height) {
		return ((R (*)(HUDNotifyView*, Il2CppString*, Il2CppString*, Il2CppString*, Icon, float))(Il2CppBase() + 0x1277E60))(this, caption, msg, sound, icon, height);
	}
	template <typename R = void> R Show_1(Il2CppString* caption, Il2CppString* msg, Il2CppString* sound, Icon icon, int32_t count) {
		return ((R (*)(HUDNotifyView*, Il2CppString*, Il2CppString*, Il2CppString*, Icon, int32_t))(Il2CppBase() + 0x1277F68))(this, caption, msg, sound, icon, count);
	}
	template <typename R = void> R ShowForNewClass(ItemEntity* item, BaseNotifyComponent* notifyComponent) {
		return ((R (*)(HUDNotifyView*, ItemEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x1278388))(this, item, notifyComponent);
	}
	template <typename R = void> R ShowGotRune(ItemEntity* runeItem, ItemEntity* classItem, int32_t count, Il2CppString* text, Il2CppString* sound, bool ghosty) {
		return ((R (*)(HUDNotifyView*, ItemEntity*, ItemEntity*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1278A4C))(this, runeItem, classItem, count, text, sound, ghosty);
	}
	template <typename R = void> R ShowGotItem(ItemEntity* item, int32_t count, Il2CppString* sound, Il2CppString* caption) {
		return ((R (*)(HUDNotifyView*, ItemEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1278FE0))(this, item, count, sound, caption);
	}
	template <typename R = void> R Show_2() {
		return ((R (*)(HUDNotifyView*))(Il2CppBase() + 0x1279514))(this);
	}
	template <typename R = void> R StopAndDestroy() {
		return ((R (*)(HUDNotifyView*))(Il2CppBase() + 0x127956C))(this);
	}
	template <typename R = uintptr_t> R Showing() {
		return ((R (*)(HUDNotifyView*))(Il2CppBase() + 0x1278310))(this);
	}

};

