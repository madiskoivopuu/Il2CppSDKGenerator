#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatContactView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatContactView"));
	}

	template <typename T = uintptr_t> T& PlayerNameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OnlineStatusToggle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SelectContact() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AddContact() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& RemoveContact() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& MuteContact() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& UnMuteContact() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& UnreadMessagesHolder() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& UnreadMessagesText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& GetUnreadMessagesCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = ContactsEntity*> T& _entity() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Action2ContactsEntity*, bool>*> T& _onFriendChanged() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Action2ContactsEntity*, bool>*> T& _onMuteChanged() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Action1ContactsEntity*>*> T& _onSelected() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Nullable1int32_t>*> T& _count() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ChatContactView*))(Il2CppBase() + 0x13F18E4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ChatContactView*))(Il2CppBase() + 0x13F1AC0))(this);
	}
	template <typename T = void> T Initialize(ContactsEntity* entity, Action1ContactsEntity*>* onSelected, Action2ContactsEntity*, bool>* onFavouriteChanged, Action2ContactsEntity*, bool>* onMuteChanged) {
		return ((T (*)(ChatContactView*, ContactsEntity*, Action1ContactsEntity*>*, Action2ContactsEntity*, bool>*, Action2ContactsEntity*, bool>*))(Il2CppBase() + 0x13F1C9C))(this, entity, onSelected, onFavouriteChanged, onMuteChanged);
	}
	template <typename T = void> T OnSelectContactClicked() {
		return ((T (*)(ChatContactView*))(Il2CppBase() + 0x13F1E90))(this);
	}
	template <typename T = void> T OnRemoveContactClicked() {
		return ((T (*)(ChatContactView*))(Il2CppBase() + 0x13F1EF0))(this);
	}
	template <typename T = void> T OnAddContactClicked() {
		return ((T (*)(ChatContactView*))(Il2CppBase() + 0x13F1F54))(this);
	}
	template <typename T = void> T OnMuteContactClicked() {
		return ((T (*)(ChatContactView*))(Il2CppBase() + 0x13F1FB8))(this);
	}
	template <typename T = void> T OnUnmuteContactClicked() {
		return ((T (*)(ChatContactView*))(Il2CppBase() + 0x13F201C))(this);
	}
	template <typename T = void> T SetUnreadMessagesCount(int32_t count) {
		return ((T (*)(ChatContactView*, int32_t))(Il2CppBase() + 0x13F2080))(this, count);
	}

};

