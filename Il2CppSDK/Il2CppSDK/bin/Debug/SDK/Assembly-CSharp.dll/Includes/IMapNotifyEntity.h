#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapNotifyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapNotifyEntity"));
	}


	template <typename T = uintptr_t> T get_mapNotify() {
		return ((T (*)(IMapNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMapNotify() {
		return ((T (*)(IMapNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((T (*)(IMapNotifyEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename T = void> T ReplaceMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((T (*)(IMapNotifyEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename T = void> T RemoveMapNotify() {
		return ((T (*)(IMapNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
