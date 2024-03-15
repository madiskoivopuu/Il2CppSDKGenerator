#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapNotifyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapNotifyEntity"));
	}


	template <typename R = MapNotifyComponent*> R get_mapNotify() {
		return ((R (*)(IMapNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMapNotify() {
		return ((R (*)(IMapNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((R (*)(IMapNotifyEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename R = void> R ReplaceMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((R (*)(IMapNotifyEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename R = void> R RemoveMapNotify() {
		return ((R (*)(IMapNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

