#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailEntity"));
	}

	template <typename T = FromCyclicComponent*> static T& fromCyclicComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = CreationTimeComponent*> T get_creationTime() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4CC38))(this);
	}
	template <typename T = bool> T get_hasCreationTime() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4CCC0))(this);
	}
	template <typename T = void> T AddCreationTime(int64_t newValue) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4CCCC))(this, newValue);
	}
	template <typename T = void> T ReplaceCreationTime(int64_t newValue) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4CDD0))(this, newValue);
	}
	template <typename T = void> T RemoveCreationTime() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4CED4))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4CEE0))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4CF68))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(MailEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A4CF74))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(MailEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A4D09C))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D1C4))(this);
	}
	template <typename T = DurabilityCoefComponent*> T get_durabilityCoef() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D1D0))(this);
	}
	template <typename T = bool> T get_hasDurabilityCoef() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D258))(this);
	}
	template <typename T = void> T AddDurabilityCoef(float newValue) {
		return ((T (*)(MailEntity*, float))(Il2CppBase() + 0x1A4D264))(this, newValue);
	}
	template <typename T = void> T ReplaceDurabilityCoef(float newValue) {
		return ((T (*)(MailEntity*, float))(Il2CppBase() + 0x1A4D368))(this, newValue);
	}
	template <typename T = void> T RemoveDurabilityCoef() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D46C))(this);
	}
	template <typename T = EndTimeComponent*> T get_endTime() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D478))(this);
	}
	template <typename T = bool> T get_hasEndTime() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D500))(this);
	}
	template <typename T = void> T AddEndTime(int64_t newValue) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4D50C))(this, newValue);
	}
	template <typename T = void> T ReplaceEndTime(int64_t newValue) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4D610))(this, newValue);
	}
	template <typename T = void> T RemoveEndTime() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D714))(this);
	}
	template <typename T = bool> T get_isFromCyclic() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D720))(this);
	}
	template <typename T = void> T set_isFromCyclic(bool value) {
		return ((T (*)(MailEntity*, bool))(Il2CppBase() + 0x1A4D72C))(this, value);
	}
	template <typename T = GuildJoinResultComponent*> T get_guildJoinResult() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D844))(this);
	}
	template <typename T = bool> T get_hasGuildJoinResult() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4D8CC))(this);
	}
	template <typename T = void> T AddGuildJoinResult(int64_t newGuildId, bool newAccepted) {
		return ((T (*)(MailEntity*, int64_t, bool))(Il2CppBase() + 0x1A4D8D8))(this, newGuildId, newAccepted);
	}
	template <typename T = void> T ReplaceGuildJoinResult(int64_t newGuildId, bool newAccepted) {
		return ((T (*)(MailEntity*, int64_t, bool))(Il2CppBase() + 0x1A4D9E8))(this, newGuildId, newAccepted);
	}
	template <typename T = void> T RemoveGuildJoinResult() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DAF8))(this);
	}
	template <typename T = MessageIdComponent*> T get_messageId() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DB04))(this);
	}
	template <typename T = bool> T get_hasMessageId() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DB8C))(this);
	}
	template <typename T = void> T AddMessageId(int64_t newId) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4CB34))(this, newId);
	}
	template <typename T = void> T ReplaceMessageId(int64_t newId) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DB98))(this, newId);
	}
	template <typename T = void> T RemoveMessageId() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DC9C))(this);
	}
	template <typename T = PlayerIdComponent*> T get_playerId() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DCA8))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DD30))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DD3C))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DE40))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DF44))(this);
	}
	template <typename T = SenderComponent*> T get_sender() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DF50))(this);
	}
	template <typename T = bool> T get_hasSender() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4DFD8))(this);
	}
	template <typename T = void> T AddSender(int64_t newId) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4DFE4))(this, newId);
	}
	template <typename T = void> T ReplaceSender(int64_t newId) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4E0E8))(this, newId);
	}
	template <typename T = void> T RemoveSender() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E1EC))(this);
	}
	template <typename T = StackComponent*> T get_stack() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E1F8))(this);
	}
	template <typename T = bool> T get_hasStack() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E280))(this);
	}
	template <typename T = void> T AddStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((T (*)(MailEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x1A4E28C))(this, newResource, newCount, newSignature);
	}
	template <typename T = void> T ReplaceStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((T (*)(MailEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x1A4E3BC))(this, newResource, newCount, newSignature);
	}
	template <typename T = void> T RemoveStack() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E4EC))(this);
	}
	template <typename T = SupportMessageComponent*> T get_supportMessage() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E4F8))(this);
	}
	template <typename T = bool> T get_hasSupportMessage() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E580))(this);
	}
	template <typename T = void> T AddSupportMessage(int32_t newValue) {
		return ((T (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4E58C))(this, newValue);
	}
	template <typename T = void> T ReplaceSupportMessage(int32_t newValue) {
		return ((T (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4E690))(this, newValue);
	}
	template <typename T = void> T RemoveSupportMessage() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E794))(this);
	}
	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E7A0))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4E828))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MailEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A4E834))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MailEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A4E948))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4EA5C))(this);
	}
	template <typename T = TournamentComponent*> T get_tournament() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4EA68))(this);
	}
	template <typename T = bool> T get_hasTournament() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4EAF0))(this);
	}
	template <typename T = void> T AddTournament(int64_t newId) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4EAFC))(this, newId);
	}
	template <typename T = void> T ReplaceTournament(int64_t newId) {
		return ((T (*)(MailEntity*, int64_t))(Il2CppBase() + 0x1A4EC00))(this, newId);
	}
	template <typename T = void> T RemoveTournament() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4ED04))(this);
	}
	template <typename T = TournamentPointsComponent*> T get_tournamentPoints() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4ED10))(this);
	}
	template <typename T = bool> T get_hasTournamentPoints() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4ED98))(this);
	}
	template <typename T = void> T AddTournamentPoints(int32_t newCount) {
		return ((T (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4EDA4))(this, newCount);
	}
	template <typename T = void> T ReplaceTournamentPoints(int32_t newCount) {
		return ((T (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4EEA8))(this, newCount);
	}
	template <typename T = void> T RemoveTournamentPoints() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4EFAC))(this);
	}
	template <typename T = TournamentPositionComponent*> T get_tournamentPosition() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4EFB8))(this);
	}
	template <typename T = bool> T get_hasTournamentPosition() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4F040))(this);
	}
	template <typename T = void> T AddTournamentPosition(int32_t newValue) {
		return ((T (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4F04C))(this, newValue);
	}
	template <typename T = void> T ReplaceTournamentPosition(int32_t newValue) {
		return ((T (*)(MailEntity*, int32_t))(Il2CppBase() + 0x1A4F150))(this, newValue);
	}
	template <typename T = void> T RemoveTournamentPosition() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4F254))(this);
	}
	template <typename T = WindowDataComponent*> T get_windowData() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4F260))(this);
	}
	template <typename T = bool> T get_hasWindowData() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4F2E8))(this);
	}
	template <typename T = void> T AddWindowData(Il2CppString* newValue) {
		return ((T (*)(MailEntity*, Il2CppString*))(Il2CppBase() + 0x1A4F2F4))(this, newValue);
	}
	template <typename T = void> T ReplaceWindowData(Il2CppString* newValue) {
		return ((T (*)(MailEntity*, Il2CppString*))(Il2CppBase() + 0x1A4F408))(this, newValue);
	}
	template <typename T = void> T RemoveWindowData() {
		return ((T (*)(MailEntity*))(Il2CppBase() + 0x1A4F51C))(this);
	}

};

