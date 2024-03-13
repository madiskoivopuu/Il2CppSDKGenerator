#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorPveWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorPveWorld"));
	}

	template <typename T = MessageParser1MonitorPveWorld*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountUsersOnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countUsersOnline_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CountClanOnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countClanOnline_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& CapUsersOnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& capUsersOnline_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CapClanOnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& capClanOnline_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& TimeEstimatedEndFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& timeEstimatedEnd_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& MarkToDeleteFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& markToDelete_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LootProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lootProgress_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& LootMaxProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lootMaxProgress_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& TagIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& tagID_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& TagNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& tagName_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& LevelsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& levels_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = MessageParser1MonitorPveWorld*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA5FF8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA605C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA617C))(this);
	}
	template <typename T = MonitorPveWorld*> T Clone() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA62D8))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6334))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(MonitorPveWorld*, int64_t))(Il2CppBase() + 0x1EA633C))(this, value);
	}
	template <typename T = int32_t> T get_CountUsersOnline() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6344))(this);
	}
	template <typename T = void> T set_CountUsersOnline(int32_t value) {
		return ((T (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA634C))(this, value);
	}
	template <typename T = int32_t> T get_CountClanOnline() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6354))(this);
	}
	template <typename T = void> T set_CountClanOnline(int32_t value) {
		return ((T (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA635C))(this, value);
	}
	template <typename T = int32_t> T get_CapUsersOnline() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6364))(this);
	}
	template <typename T = void> T set_CapUsersOnline(int32_t value) {
		return ((T (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA636C))(this, value);
	}
	template <typename T = int32_t> T get_CapClanOnline() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6374))(this);
	}
	template <typename T = void> T set_CapClanOnline(int32_t value) {
		return ((T (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA637C))(this, value);
	}
	template <typename T = int64_t> T get_TimeEstimatedEnd() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6384))(this);
	}
	template <typename T = void> T set_TimeEstimatedEnd(int64_t value) {
		return ((T (*)(MonitorPveWorld*, int64_t))(Il2CppBase() + 0x1EA638C))(this, value);
	}
	template <typename T = bool> T get_MarkToDelete() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6394))(this);
	}
	template <typename T = void> T set_MarkToDelete(bool value) {
		return ((T (*)(MonitorPveWorld*, bool))(Il2CppBase() + 0x1EA639C))(this, value);
	}
	template <typename T = int32_t> T get_LootProgress() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63A8))(this);
	}
	template <typename T = void> T set_LootProgress(int32_t value) {
		return ((T (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA63B0))(this, value);
	}
	template <typename T = int32_t> T get_LootMaxProgress() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63B8))(this);
	}
	template <typename T = void> T set_LootMaxProgress(int32_t value) {
		return ((T (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA63C0))(this, value);
	}
	template <typename T = int32_t> T get_TagID() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63C8))(this);
	}
	template <typename T = void> T set_TagID(int32_t value) {
		return ((T (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA63D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagName() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63D8))(this);
	}
	template <typename T = void> T set_TagName(Il2CppString* value) {
		return ((T (*)(MonitorPveWorld*, Il2CppString*))(Il2CppBase() + 0x1EA63E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Levels() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6460))(this);
	}
	template <typename T = void> T set_Levels(Il2CppString* value) {
		return ((T (*)(MonitorPveWorld*, Il2CppString*))(Il2CppBase() + 0x1EA6468))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(MonitorPveWorld*, Il2CppObject*))(Il2CppBase() + 0x1EA64E8))(this, other);
	}
	template <typename T = bool> T Equals_1(MonitorPveWorld* other) {
		return ((T (*)(MonitorPveWorld*, MonitorPveWorld*))(Il2CppBase() + 0x1EA6558))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6670))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA680C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MonitorPveWorld*, uintptr_t))(Il2CppBase() + 0x1EA6870))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6ABC))(this);
	}
	template <typename T = void> T MergeFrom(MonitorPveWorld* other) {
		return ((T (*)(MonitorPveWorld*, MonitorPveWorld*))(Il2CppBase() + 0x1EA6DC0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MonitorPveWorld*, uintptr_t))(Il2CppBase() + 0x1EA6E98))(this, input);
	}

};

}
